#!/bin/bash
#
# Usage:
#   ./scripts/run.sh [project] [run|build|debug|clean]
#   Projects: cpp-learning (default), student-management-system

set -euo pipefail

ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"
cd "$ROOT"

PROJECT="cpp-learning"
MODE="run"

case "${1:-}" in
    cpp-learning|student-management-system)
        PROJECT="$1"
        MODE="${2:-run}"
        ;;
    "" )
        ;;
    build|debug|run|clean)
        MODE="$1"
        ;;
    *)
        echo "Unknown project or mode: $1" >&2
        echo "Usage: $0 [cpp-learning|student-management-system] [run|build|debug|clean]" >&2
        exit 2
        ;;
esac

if [[ "$PROJECT" == "cpp-learning" ]]; then
    TARGET="cpp_learning"
    RUN_DIR="$ROOT"
else
    TARGET="student_management_system"
    RUN_DIR="$ROOT/projects/student-management-system"
fi

BUILD_DIR="$ROOT/build/cmake"
EXECUTABLE="$BUILD_DIR/$TARGET"

configure() {
    if ! command -v cmake >/dev/null 2>&1; then
        echo "CMake is required. Install it with: brew install cmake" >&2
        exit 127
    fi

    local compiler
    if command -v g++-16 >/dev/null 2>&1; then
        compiler="$(command -v g++-16)"
    elif command -v g++ >/dev/null 2>&1; then
        compiler="$(command -v g++)"
    elif [[ "$PROJECT" == "student-management-system" ]]; then
        compiler="$(command -v clang++ || true)"
    else
        echo "GCC is required for cpp-learning because its examples use <bits/stdc++.h>." >&2
        exit 1
    fi

    if [[ -z "$compiler" ]]; then
        echo "No supported C++ compiler found. Install GCC or Clang." >&2
        exit 1
    fi

    cmake -S "$ROOT" -B "$BUILD_DIR" \
        -DCMAKE_CXX_COMPILER="$compiler" \
        -DCMAKE_BUILD_TYPE="$([[ "$MODE" == "debug" ]] && echo Debug || echo Release)"
}

case "$MODE" in
    build|debug|run)
        configure
        cmake --build "$BUILD_DIR" --target "$TARGET" --parallel
        if [[ "$MODE" == "run" ]]; then
            echo "Running $PROJECT"
            echo "---"
            (cd "$RUN_DIR" && "$EXECUTABLE")
        fi
        ;;
    clean)
        if [[ -f "$BUILD_DIR/CMakeCache.txt" ]]; then
            cmake --build "$BUILD_DIR" --target clean
        else
            echo "Nothing to clean for CMake builds."
        fi
        ;;
    *)
        echo "Unknown mode: $MODE" >&2
        echo "Usage: $0 [cpp-learning|student-management-system] [run|build|debug|clean]" >&2
        exit 2
        ;;
esac