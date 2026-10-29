# Variables in C

## 1. Variables

A variable is a named memory location used to store data in a program. Its value can change during program execution.

Variables should have meaningful names that describe the data they represent.

Examples: `average`, `height`, `roll`, `semester`, `classStrength`.

### Rules for Naming Variables

- A variable name can contain letters, digits, and underscores (`_`).
- It must begin with a letter or an underscore, not a digit.
- Spaces and special characters are not allowed.
- C keywords cannot be used as variable names.
- Variable names are case-sensitive. For example, `total` and `Total` are different identifiers.
- Meaningful names improve readability.

Examples:

    int age = 18;
    float average = 85.5;

## 2. Types of Variables

Variables can be classified according to their scope, lifetime, and purpose.

### 2.1 Local Variables

Local variables are declared inside a function or block. They can generally be accessed only within the function or block where they are declared.

Ordinary local variables have automatic storage duration by default. Their lifetime is limited to the execution of the block in which they are declared.

Example:

    void display(void) {
        int number = 10;
    }

Here, `number` is a local variable.

### 2.2 Global Variables

Global variables are declared outside all functions. They have file scope by default and can be accessed within their visibility, subject to scope and linkage rules.

Their lifetime extends throughout program execution.

Example:

    int count = 0;

    int main(void) {
        count = 10;
        return 0;
    }

Here, `count` is a global variable.

### 2.3 Constant Variables

A constant variable is declared using the `const` keyword. Its value cannot be modified through that variable after initialization.

Syntax:

    const int limit = 50;

Here, `limit` cannot be reassigned a different value through this identifier.

### 2.4 Volatile Variables

The `volatile` keyword tells the compiler that a variable's value may change in ways not apparent from the program's ordinary execution flow. The compiler must therefore respect the required accesses to that variable.

It is commonly used with hardware registers and certain forms of externally updated data.

Syntax:

    volatile int status;

The `volatile` keyword does not make a variable constant and does not provide thread synchronization.

## 3. Scope and Lifetime

Scope defines the region of a program where an identifier can be accessed.

Lifetime defines the period during program execution for which an object's storage exists.

| Feature | Local Variable | Global Variable |
|---|---|---|
| Declaration | Inside a function or block | Outside all functions |
| Scope | Limited to its block or function | File scope by default |
| Lifetime | Usually limited to the block's execution for ordinary local variables | Throughout program execution |
| Default initialization | Indeterminate if an automatic variable is uninitialized | Zero-initialized if not explicitly initialized |

## 4. Important Points

- Variables store data in memory.
- Variable names must follow C's identifier rules.
- C is case-sensitive.
- Local and global variables differ in scope and lifetime.
- The `const` keyword restricts modification through the declared identifier.
- The `volatile` keyword indicates that a value may change outside the compiler's ordinary view of program execution.
- Scope concerns where a name is accessible, while lifetime concerns how long an object exists.
