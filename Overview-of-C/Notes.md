# Chapter 2: Overview of C Programming

## 1. History of C

- **Developed by:** Dennis Ritchie
- **Organization:** Bell Laboratories (Bell Labs), USA
- **Year:** 1972
- **Predecessor:** B programming language, developed by Ken Thompson.
- **Purpose:** Originally developed to support the implementation of the UNIX operating system.

### Evolution of C

| Language / Standard | Year | Developer / Organization |
|---|---|---|
| ALGOL | 1960 | International Group |
| CPL | 1963 | Cambridge University and collaborators |
| BCPL | 1967 | Martin Richards |
| B | Around 1970 | Ken Thompson |
| C | 1972 | Dennis Ritchie |
| K&R C | 1978 | Brian Kernighan and Dennis Ritchie |
| ANSI C (C89) | 1989 | ANSI |
| C90 | 1990 | ISO |

C evolved from the B programming language, which inherited ideas from earlier languages. C was named after its predecessor, B.

## 2. Basic Structure of a C Program

A basic C program consists of preprocessor directives, a `main()` function, statements, and other elements.

### Example: Hello World

    #include <stdio.h>

    int main(void)
    {
        /* My first C program */
        printf("Hello, World!\n");
        return 0;
    }

### Components of the Program

| Component | Purpose |
|---|---|
| `#include <stdio.h>` | Includes declarations for standard input/output functions. |
| `int main(void)` | Defines the program's entry-point function. |
| `{ }` | Encloses the function body. |
| `/* ... */` | Encloses a comment. |
| `printf()` | Displays formatted output. |
| `\n` | Moves the output to a new line. |
| `return 0;` | Indicates successful termination. |

## 3. Compilation and Execution

The general process of converting a C program into an executable involves the following stages:

1. **Preprocessing:** Processes directives such as `#include`.
2. **Compilation:** Translates C source code into lower-level code.
3. **Assembly:** Produces object code when a separate assembler is used.
4. **Linking:** Combines object files and required libraries.
5. **Execution:** Runs the resulting executable.

### Compiling with GCC

Save the source code as `hello.c`.

Compile the program:

    gcc hello.c -o hello

Run on Linux:

    ./hello

Run on Windows Command Prompt:

    hello.exe

Expected output:

    Hello, World!

**Remember:** Compilation translates the source code, whereas execution runs the resulting program.

## 4. Tokens in C

Tokens are the smallest meaningful individual units of a C program recognized by the compiler.

### Types of Tokens

| Token Category | Description | Examples |
|---|---|---|
| Keywords | Reserved words with predefined meanings | `int`, `return`, `if` |
| Identifiers | Names given to program entities | `total`, `main` |
| Constants | Fixed values | `10`, `3.14`, `'A'` |
| String literals | Character sequences enclosed in double quotes | `"Hello"` |
| Operators | Symbols that perform operations | `+`, `-`, `==` |
| Punctuators | Symbols that organize program structure | `;`, `,`, `{}`, `()` |

### Example

    int total = 10 + 5;

The tokens in this statement are:

- `int` — keyword
- `total` — identifier
- `=` — operator
- `10` — integer constant
- `+` — operator
- `5` — integer constant
- `;` — punctuator

## 5. Keywords and Identifiers

### Keywords

Keywords are reserved words with predefined meanings in C. They cannot be used as ordinary user-defined identifiers.

Examples:

`int`, `char`, `float`, `if`, `else`, `for`, `while`, `return`, `void`

Traditional ANSI C (C90) defines 32 keywords.

### Rules for Identifiers

1. An identifier may contain letters, digits, and underscores.
2. It must not begin with a digit.
3. It cannot be a reserved keyword.
4. C is case-sensitive.
5. Spaces are not allowed within an identifier.

| Valid Identifier | Invalid Identifier | Reason |
|---|---|---|
| `total` | `2total` | Begins with a digit |
| `student_age` | `student age` | Contains a space |
| `value1` | `float` | Reserved keyword |
| `Total` | — | Valid; differs from `total` |

## 6. Comments in C

Comments explain the program and are ignored as executable instructions.

### Single-Line Comment

    // This is a single-line comment.

### Multi-Line Comment

    /*
       This is a multi-line comment.
       It can span multiple lines.
    */

Comments improve code readability and help document the purpose of statements.

## 7. Semicolons in C

A semicolon (`;`) terminates most expression statements and certain other statements in C.

Example:

    int number = 10;
    printf("%d\n", number);
    return 0;

Forgetting a required semicolon usually causes a compilation error.

Preprocessor directives and function definitions do not require a semicolon at their ends.

## 8. Format Specifiers

Format specifiers are used with formatted input/output functions, such as `printf()` and `scanf()`, to specify how values should be interpreted or displayed.

### Common Format Specifiers

| Specifier | Purpose |
|---|---|
| `%d` | Signed decimal integer |
| `%u` | Unsigned decimal integer |
| `%f` | Floating-point value in `printf()` |
| `%c` | Character |
| `%s` | String |
| `%x` | Unsigned hexadecimal integer |
| `%o` | Unsigned octal integer |
| `%p` | Pointer value |
| `%%` | Prints the percent character |

### Example Program

    #include <stdio.h>

    int main(void)
    {
        int number = 25;
        float value = 3.5f;
        char grade = 'A';

        printf("Number: %d\n", number);
        printf("Value: %f\n", value);
        printf("Grade: %c\n", grade);

        return 0;
    }

### Output

    Number: 25
    Value: 3.500000
    Grade: A

**Important distinction:**

- In `printf()`, `%f` is used to display a floating-point value.
- In `scanf()`, `%f` expects a pointer to `float`.
- In `scanf()`, `%lf` expects a pointer to `double`.

The conversion specifier must match the required argument type.

## Key Takeaways

- C was developed by Dennis Ritchie at Bell Labs in 1972.
- C evolved from the B programming language.
- A C program contains tokens arranged according to language syntax.
- The compiler toolchain translates source code into an executable.
- Keywords are reserved words, whereas identifiers name program entities.
- Comments improve readability without acting as executable statements.
- Semicolons terminate most statements.
- Format specifiers are used with formatted input/output functions.
