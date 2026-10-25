# C++/CPP
This repository is dedicated to learning and practicing C++ fundamentals, OOP concepts in C++, Data Structures & Algorithms (DSA), and competitive programming.

It includes:
- C++ basics and core concepts
- OOP in C++
- Data Structures & Algorithms
- Problem-solving practice
- Competitive Programming (CP)
- Coding challenges from platforms like LeetCode.

## Building and running projects

The repository contains independent C++ programs. Build one target at a time
instead of compiling every `.cpp` file together:

```bash
./scripts/run.sh                                 # Build and run cpp-learning
./scripts/run.sh student-management-system       # Build and run the student app
./scripts/run.sh student-management-system build
./scripts/run.sh student-management-system debug
./scripts/run.sh clean
```

CMake keeps each executable's source files and include paths separate. Build
outputs go under `build/cmake/`; install CMake and a C++17 compiler first. The
`cpp-learning` target uses GCC because its examples include GCC's
`<bits/stdc++.h>` header. The student management system can use GCC or Clang.

## Debugging in VS Code (macOS)

Install the **CodeLLDB** extension (`vadimcn.vscode-lldb`) and open this repository
as the VS Code workspace. Choose **Debug cpp-learning (LLDB)** or
**Debug student-management-system (LLDB)** from the Run and Debug menu. Each
configuration builds only that program with debug symbols before launching it.
Set breakpoints in the source files before starting the debugger.

The script prefers Homebrew GCC (`g++-16`) when available. You can also create
debug builds from a terminal with `./scripts/run.sh <project> debug`.

---