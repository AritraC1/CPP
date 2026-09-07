#!/bin/bash
#
# Usage:
#   ./scripts/run.sh          build + run
#   ./scripts/run.sh build    build only
#   ./scripts/run.sh clean    remove build artifacts

set -euo pipefail

# ---- config ----
# Prefer Homebrew GCC (needed if any file still uses bits/stdc++.h),
# fall back to g++ / clang++ if it's not installed.

if command -v g++-16 &> /dev/null; then
    CXX="g++-16"
elif command -v g++ &> /dev/null; then
    CXX="g++"
else
    CXX="clang++"
fi

STD="c++17"
OUT="main"
ROOT="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

cd "$ROOT"

# ---- functions ----

build() {
    # Find every .cpp file in the project (skip build output dirs)
    SOURCES=$(find . -name "*.cpp" -not -path "./build/*")

    echo "Compiling with $CXX (-std=$STD):"
    # echo "$SOURCES" | sed 's/^/  /'

    $CXX -std="$STD" -I. -Wall -Wextra $SOURCES -o "$OUT"

    echo "Build succeeded -> ./$OUT"
}

run() {
    build
    echo "Running ./$OUT"
    echo "---"
    "./$OUT"
}

clean() {
    if [ -f "$OUT" ]; then
        rm -f "$OUT"
        echo "Removed ./$OUT"
    else
        echo "Nothing to clean"
    fi
}

# ---- entry point ----

MODE="${1:-run}"

case "$MODE" in
    build)
        build
        ;;
    run)
        run
        ;;
    clean)
        clean
        ;;
    *)
        echo "Unknown option: $MODE"
        echo "Usage: $0 [build|run|clean]"
        exit 1
        ;;
esac