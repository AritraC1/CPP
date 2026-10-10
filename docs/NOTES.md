# Components of a C++ code

## Header
A header file is a file that contains declarations/information that another C++ file can use - 
**Eg:** `#include <iostream>` - Make the declarations from the iostream header available in this source file.

### Why do we need headers?
Imagine we have `main.cpp`, `math.cpp` and `math.h`.

`math.cpp` contains the actual implementation:
```cpp
int add(int a, int b) {
    return a + b;
}
```

`math.h` or `math.hpp` can contain the declaration:
```cpp
int add(int a, int b);
```

Then `main.cpp` can do:
```cpp
#include "math.h"

int main() {
    int x = add(10, 20);
}
```

We need headers:
- **Separation of interface and implementation:** Other files only need to know what a function does (its signature), not how it's implemented.
- **Code reuse:** You can `#include` the same header in many .cpp files without duplicating code.
- **Faster compilation:** Only changed .cpp files need recompiling, since headers declare rather than fully implement everything.
- **Organization:** Keeps large projects manageable by splitting code into logical units.


***Note:***

> | Extension | Common convention           | Typical usage |
> | --------- | --------------------------- | ------------- |
> | `.h`      | Generic/C-compatible header | C and C++     |
> | `.hpp`    | Explicitly C++ header       | C++ only      |


### What does `#include` actually do?

`#include` is handled by the preprocessor, before the actual C++ compilation.

Conceptually:
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello";
}
```

becomes something roughly like:
```md
Preprocessor
     ↓
processes #include
     ↓
compiler sees the relevant declarations
     ↓
compilation
     ↓
object file
     ↓
linker
     ↓
executable
```

### <...> vs "..."
`#include <iostream>` → system/standard include
`#include "myfile.h"` → your/project include

### Mental model
```md
Header
  ↓
"Here are the declarations/types/functions you can use"

Source file (.cpp)
  ↓
"Here is the implementation/code"

#include
  ↓
"Bring the header's declarations into this source file"
```

---

## Namespaces
A namespace is a way to group related names (classes, functions, variables) under a common label, so they don't clash with names from other parts of your code or from libraries.

```cpp
#include <iostream>

namespace Physics {
    double gravity = 9.8;
    
    double force(double mass) {
        return mass * gravity;
    }
}

namespace Finance {
    double gravity = 0.0; // no conflict! different namespace
    
    double interest(double principal, double rate) {
        return principal * rate;
    }
}

int main() {
    std::cout << Physics::force(10) << std::endl;      // 98
    std::cout << Physics::gravity << std::endl;         // 9.8
    std::cout << Finance::gravity << std::endl;          // 0.0
    return 0;
}
```

Notice `std::cout`—that `std` is the standard namespace, where all of C++'s standard library lives (`cout`, `cin`, `vector`, `string`, etc.).

### Why we use namespaces?
- **Avoid name collisions:** Two libraries might both define a function called `process()`. Namespaces let both exist without conflict (`LibraryA::process()` vs `LibraryB::process()`).
- **Organization:** Groups logically related code together.
- **Clarity:** `std::vector` immediately tells you this `vector` comes from the standard library, not your own custom class.


**Note:**
You'll often see `using namespace std;` at the top of beginner code to avoid typing `std::` everywhere—but it's generally discouraged in larger projects (especially in header files) because it defeats the purpose of namespaces by pulling everything into the global scope, increasing the risk of collisions.

### Quick summary
| Concept       | Purpose                                                                            |
| ------------- | ---------------------------------------------------------------------------------- |
| **Header**    | Shares declarations across multiple files; separates interface from implementation |
| **Namespace** | Groups names together and prevents naming conflicts                                |

Together, they're key tools for writing large, maintainable **`C++`** programs—headers organize your code across files, and namespaces organize your code by logical grouping and prevent naming chaos.

---

## `int main() {}`
It is the entry point of every C++ program — it's the function where program execution begins when you run your compiled code.

```cpp
int main() {
    // your code here
    return 0;
}
```
- `int` — the return type. `main()` must return an integer, which tells the operating system how the program finished.
- `main` — the special, reserved function name. Every executable C++ program must have exactly one `main()` function — it's where the runtime hands off control to your code.
- `()` — the parameter list. Here it's empty, meaning main takes no arguments. (It can also take command-line arguments — more on that below.)
- `{}` — the function body, where your actual code goes. An empty body like `int main() {}` is a valid, minimal, "do-nothing" program.

### Putting it together
```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

1. The OS loads your program and calls `main()`.
2. Code inside `{}` runs top to bottom.
3. `return 0;` ends the program and reports success back to the OS.

### Quick summary
| Part        | Meaning                                                                 |
| ----------- | ----------------------------------------------------------------------- |
| `int`       | Return type — must be an integer                                        |
| `main`      | Reserved entry-point function name                                      |
| `()`        | Parameters — empty, or `(int argc, char* argv[])` for command-line args |
| `{}`        | Function body — your program's logic                                    |
| `return 0;` | Signals successful completion to the OS                                 |


---