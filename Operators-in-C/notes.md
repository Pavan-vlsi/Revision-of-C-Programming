
# Operators in C

## Introduction

An operator is a symbol that performs a specific operation on one or more operands. Operators are used to perform arithmetic calculations, compare values, manipulate individual bits, evaluate logical conditions, and assign values to variables.

C operators are classified into the following categories:

- Arithmetic operators
- Relational operators
- Bitwise operators
- Logical operators
- Assignment operators
- Conditional operator
- Other operators

## 1. Arithmetic Operators

Arithmetic operators perform mathematical operations on numeric operands.

| Operator | Operation | Example |
|---|---|---|
| `+` | Addition | `10 + 5 = 15` |
| `-` | Subtraction | `10 - 5 = 5` |
| `*` | Multiplication | `10 * 5 = 50` |
| `/` | Division | `10 / 5 = 2` |
| `%` | Modulus (remainder) | `10 % 3 = 1` |
| `++` | Increment by 1 | `a++` |
| `--` | Decrement by 1 | `a--` |

**Important points:**

- When both operands of `/` are integers, C performs integer division and discards the fractional part.
- When floating-point arithmetic is required, at least one operand must be floating-point.
- The modulus operator `%` is used with integer operands.
- Increment and decrement operators can be used in prefix (`++a`) or postfix (`a++`) form. Their expression values differ depending on the form.

### Sample Output

The following output was obtained from the arithmetic operators program using inputs `a = 6` and `b = 8`.

```text
Enter First Number:6
Enter Second Number:8

Addition=14
Subtraction=-2
Multiplication=48
Division=0.750000
Modulo Division=6
Enter a Number:8
number is:8
Increment of a number is:9
Decrement of a number is:8
```

**Note:** The division result is `0.750000` because the program uses floating-point division. The modulus result is `6` because the remainder of `6 / 8` is `6`.

## 2. Relational Operators

Relational operators compare two operands. The result of a relational expression is `1` when the condition is true and `0` when it is false.

| Operator | Meaning | Example |
|---|---|---|
| `==` | Equal to | `a == b` |
| `!=` | Not equal to | `a != b` |
| `>` | Greater than | `a > b` |
| `<` | Less than | `a < b` |
| `>=` | Greater than or equal to | `a >= b` |
| `<=` | Less than or equal to | `a <= b` |

Relational operators are commonly used in conditional statements and loops to check whether a condition is satisfied.

### Sample Output

Input values: `a = 2`, `b = 4`

```text
Enter Two numbers to perform relational operations
Enter first number a:2

Enter second number b:4

a equal to b:0
a not equal to b:1
a greater than b:0
a less than b:1
a greater than or equal to b:0
a less than or equal to b:1
```

## 3. Bitwise Operators

Bitwise operators perform operations on the individual bits of integer operands.

| Operator | Meaning | Example |
|---|---|---|
| `&` | Bitwise AND | `a & b` |
| `|` | Bitwise OR | `a | b` |
| `^` | Bitwise XOR | `a ^ b` |
| `~` | Bitwise complement | `~a` |
| `<<` | Left shift | `a << 2` |
| `>>` | Right shift | `a >> 2` |

**Working principles:**

- **AND (`&`):** A result bit is 1 only when both corresponding operand bits are 1.
- **OR (`|`):** A result bit is 1 when at least one corresponding operand bit is 1.
- **XOR (`^`):** A result bit is 1 when the corresponding operand bits differ.
- **Complement (`~`):** Reverses every bit of the operand.
- **Left shift (`<<`):** Shifts bits toward the left.
- **Right shift (`>>`):** Shifts bits toward the right.

### Sample Output

Input values: `a = 10`, `b = 3`

```text
Enter Two numbers to perform Bitwise operations
Enter first number a:10

Enter second number b:3

 bitwise and (a & b):2
 bitwise or (a | b):11
 bitwise xor (a ^ b):9
 bitwise compliment (~a):-11
 bitwise left shift (a<<2):40
 bitwise right shift (a>>2):2
```

For the given inputs, `10` is `1010` in binary and `3` is `0011` in binary (using four bits for illustration).

- `10 & 3 = 2`
- `10 | 3 = 11`
- `10 ^ 3 = 9`

On the target system used for this program, `~10` evaluates to `-11`. Bitwise complement results depend on the integer representation and type; right-shift behaviour for negative signed values can also be implementation-dependent.

## 4. Logical Operators

Logical operators evaluate conditions and produce an integer result of `1` (true) or `0` (false).

| Operator | Meaning | Example |
|---|---|---|
| `&&` | Logical AND | `a && b` |
| `||` | Logical OR | `a || b` |
| `!` | Logical NOT | `!a` |

- **Logical AND (`&&`):** True only when both operands are nonzero.
- **Logical OR (`||`):** True when at least one operand is nonzero.
- **Logical NOT (`!`):** Produces 1 if the operand is zero; otherwise, produces 0.

In C, zero represents false, and any nonzero value represents true when interpreted as a condition.

### Sample Output

Input values: `a = 1`, `b = 0`

```text
Enter Two numbers to perform Logical operations
Enter first number a:1

Enter second number b:0

 Logical and (a && b):0
 Logical or (a || b):1
 Logical not (! b):1
```

## 5. Assignment Operators

Assignment operators assign a value to a variable. The basic assignment operator is `=`.

| Operator | Meaning | Equivalent expression |
|---|---|---|
| `=` | Assignment | `a = b` |
| `+=` | Add and assign | `a += b` means `a = a + b` |
| `-=` | Subtract and assign | `a -= b` means `a = a - b` |
| `*=` | Multiply and assign | `a *= b` means `a = a * b` |
| `/=` | Divide and assign | `a /= b` means `a = a / b` |
| `%=` | Modulus and assign | `a %= b` means `a = a % b` |
| `&=` | Bitwise AND and assign | `a &= b` |
| `|=` | Bitwise OR and assign | `a |= b` |
| `^=` | Bitwise XOR and assign | `a ^= b` |
| `<<=` | Left shift and assign | `a <<= 1` |
| `>>=` | Right shift and assign | `a >>= 1` |

## 6. Conditional Operator

The conditional operator `?:` is a ternary operator because it uses three operands. It selects one of two expressions based on a condition.

**Syntax:**

```c
condition ? expression1 : expression2;
```

If the condition is true, `expression1` is selected. Otherwise, `expression2` is selected.

**Example:**

```c
int a = 10, b = 20;
int greater = (a > b) ? a : b;
```

The value of `greater` is `20`.

## 7. Other Operators

### `sizeof` Operator

The `sizeof` operator returns the size, in bytes, of a type or object.

```c
sizeof(int)
sizeof(a)
```

The size of a data type can vary between implementations. The size of a `char` is always one C byte, although a C byte is not necessarily eight bits on every implementation.

### Comma Operator

The comma operator evaluates its left operand first, then its right operand; the overall expression takes the value of the right operand.

### Address-of (`&`) and Dereference (`*`) Operators

- `&a` obtains the address of variable `a`.
- `*ptr` accesses the object pointed to by pointer `ptr`.

The symbols `&` and `*` have different meanings depending on context. For example, `&` is bitwise AND between integer operands, but address-of when applied to an appropriate object expression.

## Summary

C operators are essential for calculations, comparisons, bit manipulation, logical decision-making, and value assignment. Understanding their behaviour is important when writing expressions, implementing control flow, and developing efficient programs.
