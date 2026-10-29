# Constants in C

## 1. Constants

Constants are fixed values that do not change during program execution.

C constants can be classified into two major categories:

1. **Primary Constants:** Variables' basic value types such as integer, real, and character constants are commonly introduced as primary constants in introductory classifications.
2. **Secondary Constants:** Include arrays, pointers, structures, unions, and enumerations in traditional classifications.

## 2. Integer Constants

Integer constants are whole-number values without a fractional or decimal part. They may be positive, negative, or unsigned in representation.

### Types of Integer Constants

- **Decimal:** Base 10, using digits `0` to `9`.
  - Examples: `10`, `25`, `100`
- **Octal:** Base 8, using digits `0` to `7` and a leading `0`.
  - Examples: `012`, `075`
- **Hexadecimal:** Base 16, using digits `0` to `9` and letters `A` to `F`, with a leading `0x` or `0X`.
  - Examples: `0x2A`, `0xFF`

### Rules for Integer Constants

- An integer constant does not contain a decimal point.
- It may have a positive or negative sign when written as an expression.
- If no sign is specified, the value is positive.
- Spaces and commas cannot be included within the digits of an integer constant.
- Integer constants must follow the syntax and range permitted by their type.
- An integer constant must contain at least one digit.

## 3. Real Constants

Real constants, also called floating-point constants, represent values that may contain a fractional part.

Examples: `2.5`, `-7.1`, `0.000234`, `6.65e4`, `1.5e-5`

### Forms of Real Constants

1. **Fractional form:** Represents a number using a decimal point.
   - Example: `12.75`
2. **Exponential form:** Represents a number using an exponent.
   - Example: `6.5e3`, equivalent to `6.5 × 10³`.

### Rules for Real Constants

- A real constant must contain at least one digit.
- It may include a decimal point.
- It may be positive or negative.
- Exponential notation uses `e` or `E` to represent a power of ten.
- Spaces and commas cannot appear within the numeric constant.
- A decimal point is not compulsory when a valid exponent is present.

## 4. Character Constants

A character constant represents a single character enclosed in single quotation marks.

Examples:

    'A'
    'm'
    '7'
    '+'

Character constants can represent letters, digits, and symbols. Escape sequences such as `'\n'` represent special characters.

**Note:** In C, an ordinary character constant such as `'A'` has type `int`, while a string literal such as `"A"` is an array of characters terminated by a null character.

## 5. String Literals

A string literal is a sequence of characters enclosed in double quotation marks.

Examples:

    "Hello"
    "C Programming"
    "Welcome to C"

String literals are commonly used to display messages and represent text.

Example:

    printf("Hello, World!");

Here, `"Hello, World!"` is a string literal.

## 6. Examples of Constants in C

    int age = 18;
    float temperature = 36.5f;
    char grade = 'A';
    const int MAX_VALUE = 100;

In these examples:

- `18` is an integer constant.
- `36.5f` is a floating-point constant of type `float`.
- `'A'` is a character constant.
- `100` is an integer constant assigned to a constant-qualified variable.

## 7. Important Points

- Constants represent fixed values.
- Integer constants represent whole-number values.
- Real constants represent floating-point values.
- Character constants use single quotation marks.
- String literals use double quotation marks.
- Decimal, octal, and hexadecimal are different representations of integer values.
- The `const` keyword restricts modification through the declared identifier; it is different from a literal constant.
