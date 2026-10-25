# C++/CPP
This repository is dedicated to learning and practicing C++ fundamentals, OOP concepts in C++, Data Structures & Algorithms (DSA), and competitive programming.

It includes:
- C++ basics and core concepts
- OOP in C++
- Data Structures & Algorithms
- Problem-solving practice
- Competitive Programming (CP)
- Coding challenges from platforms like LeetCode.

## Debugging in VS Code (macOS)

Install the **CodeLLDB** extension (`vadimcn.vscode-lldb`) and open this repository
as the VS Code workspace. The project includes a launch configuration that builds
all `.cpp` files with debug symbols and starts the program when you press **F5**.
Set breakpoints in the source files before starting the debugger.

The build uses GCC because some examples include the GCC-only
`<bits/stdc++.h>` header. Install Homebrew GCC (the script prefers `g++-16`) if it
is not already available. The debug executable is written to
`build/debug/main`; the normal `build/main` executable and `run.sh` build/run
behavior are unchanged. You can also create the debug executable from a terminal
with `./scripts/run.sh debug`.

---