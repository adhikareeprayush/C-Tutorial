# **Day 1: Introduction to C Programming and Basics**

**Total Duration: 1 hour 45 minutes**

---

## 1. **Introduction to C Programming** *(~30 minutes)*
- **What is C? Why learn C?**
  - C is a general-purpose programming language known for its efficiency and control over hardware. It serves as the foundation for many modern languages like C++, Java, and Python.
  - Ideal for learning programming fundamentals and used in system-level programming, game development, and embedded systems.

- **History and Features of C Programming**
  - Developed by Dennis Ritchie at Bell Labs in 1972.
  - Features include portability, efficiency, modularity, and support for low-level operations.

- **Structure of a C Program**
  - Every C program follows a basic structure:
    ```c
    #include <stdio.h>

    int main() {
        printf("Hello, World!\n");
        return 0;
    }
    ```
  - Components:
    - **Header Files:** Includes libraries like `<stdio.h>`.
    - **`main` Function:** Entry point of the program.
    - **Statements and Comments:** Instructions and explanations in the code.

---

## 2. **Character Set, Keywords, and Data Types** *(~35 minutes)*
- **C Character Set and Tokens**
  - **Character Set:** Includes letters (A-Z, a-z), digits (0-9), special characters (`+`, `-`, `{`, `}`), and whitespace.
  - **Tokens:** Building blocks of a C program:
    - Keywords (e.g., `int`, `return`)
    - Identifiers (names for variables and functions)
    - Constants (fixed values like `42` or `3.14`)
    - Operators (`+`, `-`, `*`)
    - Punctuation (e.g., `;`, `,`)

- **Keywords, Identifiers, and Variables**
  - **Keywords:** Reserved words like `if`, `else`, `while`, `return`.
  - **Identifiers:** User-defined names for variables, functions, etc. Must start with a letter or underscore.
  - **Variables:** Used to store data.
    - Declaration and Initialization:
      ```c
      int age = 25;
      float pi = 3.14;
      ```

- **Basic Data Types**
  - Integer (`int`, `short`, `long`)
  - Floating-point (`float`, `double`)
  - Character (`char`)
    ```c
    int number = 10;
    float price = 5.99;
    char grade = 'A';
    ```

---

## 3. **Preprocessor and Directives** *(~40 minutes)*
- **Introduction to Preprocessor and Directives**
  - The preprocessor processes code before compilation.
  - Common directives include:
    - `#include` for including libraries (e.g., `<stdio.h>`).
    - `#define` for defining constants.

- **Concept of Constants and `#define` for Constant Declaration**
  ```c
  #define PI 3.14
  printf("Value of PI: %f\n", PI);
  ```

- **Difference Between `const` Keyword and `#define`**
  - `#define` is a preprocessor directive, while `const` is a keyword used in variable declarations.
  ```c
  const float pi = 3.14; // Constant variable
  ```

---

## Key Takeaways
1. C programs have a well-defined structure with a `main` function, statements, and comments.
2. Tokens, variables, and data types form the backbone of C programming.
3. Preprocessor directives streamline code and improve efficiency.

---

