# Data Types in C

## 1. Introduction

A data type specifies the kind of value a variable can store. It determines the range of values that can be represented, how the stored data is interpreted, and the operations that can be performed on it.

C data types are classified into four main categories:

1. Basic data types
2. Enumerated data types
3. Void data type
4. Derived data types

## 2. Classification of Data Types

| Category | Data Types | Purpose |
|---|---|---|
| Basic | `char`, `int`, `float`, `double` | Store character, integer, and floating-point values |
| Enumerated | `enum` | Define a set of named integer constants |
| Void | `void` | Represents the absence of a value or a type |
| Derived | Arrays, pointers, structures, unions, and function types | Represent or construct more complex types |

### Basic Data Types

Basic data types are used to represent characters, integers, and floating-point numbers.

- `char` — stores a character or a small integer value.
- `int` — stores integer values.
- `float` — stores floating-point values with single precision.
- `double` — stores floating-point values with greater precision than `float` on typical implementations.

### Enumerated Data Type

The `enum` keyword defines a type containing named integer constants.

```c
enum Day {
    MONDAY,
    TUESDAY,
    WEDNESDAY
};
```

By default, the enumerators receive consecutive integer values starting from `0`. They can also be assigned explicit values.

### Void Data Type

The `void` type indicates the absence of a value or a specific type.

Common uses include:

- A function that does not return a value.
- A function parameter list that explicitly specifies no parameters.
- A generic object pointer, written as `void *`.

Example:

```c
void display(void)
{
    printf("Hello\n");
}
```

### Derived Data Types

Derived and constructed types include:

- **Array:** Stores multiple elements of the same type.
- **Pointer:** Stores a reference to an object's memory address.
- **Structure:** Groups related members, potentially of different types.
- **Union:** Allows different members to share the same memory.
- **Function type:** Describes a function's return type and parameter types.

Arrays and structures are commonly classified as aggregate types.

## 3. Integer Types

Integer types represent whole-number values.

C provides the following integer types:

- `char`
- `short int`
- `int`
- `long int`
- `long long int`

The integer types, except `char`, can be modified with `signed` or `unsigned` where permitted.

The `signed` form can represent negative and non-negative values, while the `unsigned` form represents non-negative values.

### Integer Type Modifiers

| Modifier | Purpose |
|---|---|
| `signed` | Represents negative and non-negative integer values |
| `unsigned` | Represents only non-negative integer values |
| `short` | Requests a short integer type |
| `long` | Requests a longer integer type |

Examples:

```c
short int a = 100;
int b = -250;
unsigned int c = 500;
long int d = 100000L;
long long int e = 123456789LL;
```

### Integer Sizes and Ranges

The exact sizes and ranges of integer types depend on the implementation and platform. The values below are common examples, not universal guarantees.

| Type | Common Size | Example Range |
|---|---:|---|
| `signed char` | 1 byte | -128 to 127 |
| `unsigned char` | 1 byte | 0 to 255 |
| `short int` | 2 bytes | -32,768 to 32,767 |
| `unsigned short int` | 2 bytes | 0 to 65,535 |
| `int` | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `unsigned int` | 4 bytes | 0 to 4,294,967,295 |
| `long int` | 4 or 8 bytes | Depends on the implementation |
| `long long int` | At least 8 bytes | At least the range required by the C standard |

**Important:** Do not assume every computer uses the same storage size for each type. Use `sizeof` to check the size on the current system.

## 4. The `sizeof` Operator

The `sizeof` operator returns the storage size of a type or object in bytes. Its result has type `size_t`.

Example:

```c
#include <stdio.h>

int main(void)
{
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of char: %zu byte\n", sizeof(char));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));

    return 0;
}
```

The output depends on the implementation.

In C, `sizeof(char)` is always `1` byte. A byte is not necessarily eight bits on every theoretically permitted C implementation, although eight-bit bytes are standard on modern desktop systems.

## 5. Floating-Point Types

Floating-point types represent numbers that can contain a fractional part.

| Type | Description |
|---|---|
| `float` | Single-precision floating-point type |
| `double` | Double-precision floating-point type |
| `long double` | Extended floating-point type; its precision and representation depend on the implementation |

Example:

```c
float temperature = 36.5f;
double distance = 1234.56789;
long double measurement = 123.456789L;
```

The suffix `f` or `F` identifies a floating-point literal of type `float`. The suffix `L` or `l` identifies a `long double` literal.

A `double` literal without a suffix is the default for floating-point constants.

Floating-point values are approximations for many real numbers, so calculations may produce small rounding differences.

## 6. Character Data Type

The `char` type is used to store character values represented by character codes.

Example:

```c
char grade = 'A';
```

A character constant uses single quotation marks, such as `'A'`.

A string literal uses double quotation marks, such as `"Hello"`.

```c
char letter = 'A';
printf("%c\n", letter);
```

The plain `char` type may behave as either signed or unsigned, depending on the implementation. Use `signed char` or `unsigned char` when that distinction matters.

## 7. Variable Declaration and Initialization

A variable declaration specifies its type and name.

**Declaration:**

```c
int age;
```

Initialization assigns an initial value when the variable is defined.

**Initialization at declaration:**

```c
int age = 18;
```

**Declaration followed by assignment:**

```c
int age;
age = 18;
```

The last example uses assignment after declaration; it is not initialization in the strict C terminology.

More examples:

```c
float temperature = 36.5f;
double price = 149.99;
char grade = 'A';
```

A variable's type determines which values and operations are appropriate for it.

## 8. Type Conversion

Type conversion changes a value from one type to another.

### Implicit Conversion

The compiler automatically converts a value when required by the language's conversion rules.

```c
int number = 10;
float result = number;
```

Here, the integer value is converted to a floating-point value when assigned to `result`.

### Explicit Conversion (Type Casting)

A programmer can request a conversion using a cast.

```c
int a = 5;
int b = 2;

float result = (float)a / b;

printf("%f\n", result);
```

Output:

```text
2.500000
```

The cast converts `a` to `float` before division, so floating-point division is performed.

Without the cast, `a / b` performs integer division and produces `2`.

A cast does not guarantee that every conversion preserves the original value; some conversions can lose information.

## 9. Quick Reference

| Type or Keyword | Main Purpose |
|---|---|
| `char` | Character-sized integer type |
| `int` | Integer values |
| `float` | Single-precision floating-point values |
| `double` | Double-precision floating-point values |
| `long double` | Implementation-dependent extended floating-point precision |
| `enum` | Named integer constants |
| `void` | Represents no value or an unspecified object type through `void *` |
| `sizeof` | Determines storage size in bytes |
| `signed` | Allows negative and non-negative integer values |
| `unsigned` | Represents non-negative integer values |
| `short` | Short integer type |
| `long` | Longer integer type |

## Key Takeaways

- C data types are classified into basic, enumerated, void, and derived types.
- Integer types store whole-number values; floating-point types represent fractional values.
- The exact size and range of a type can depend on the implementation.
- Use `sizeof` to determine storage size on the current system.
- Character constants use single quotation marks, while string literals use double quotation marks.
- Implicit conversion occurs according to C's conversion rules; explicit conversion can be requested using a cast.
- Integer division discards the fractional part of the result.
