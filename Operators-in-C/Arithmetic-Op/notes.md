# Operators in C

## Introduction

An operator is a symbol that performs an operation on one or more operands. Operators are used to perform calculations, compare values, evaluate conditions, and manipulate data.

## Types of Operators

The main categories of operators in C are:

1. Arithmetic operators
2. Relational operators
3. Logical operators
4. Bitwise operators
5. Assignment operators
6. Increment and decrement operators
7. Conditional operator
8. Special operators

## Arithmetic Operators

Arithmetic operators perform mathematical operations on numeric operands.

| Operator | Operation | Example | Result |
|---|---|---|---|
| `+` | Addition | `6 + 8` | `14` |
| `-` | Subtraction | `6 - 8` | `-2` |
| `*` | Multiplication | `6 * 8` | `48` |
| `/` | Division | `6 / 8` | `0` |
| `%` | Modulus (remainder) | `6 % 8` | `6` |

**Note:** When both operands of `/` are integers, C performs integer division and discards the fractional part. If at least one operand is a floating-point value, the result can include a fractional part.

The modulus operator `%` returns the remainder of integer division and requires integer operands.

Division and modulus by zero are undefined and must be avoided.

## Increment and Decrement Operators

The increment operator `++` increases a variable's value by one, while the decrement operator `--` decreases it by one.

| Operator | Name | Example | Result |
|---|---|---|---|
| `++a` | Pre-increment | `a = 5; ++a;` | `a = 6` |
| `a++` | Post-increment | `a = 5; a++;` | `a = 6` |
| `--a` | Pre-decrement | `a = 5; --a;` | `a = 4` |
| `a--` | Post-decrement | `a = 5; a--;` | `a = 4` |

### Pre-increment and Post-increment

- **Pre-increment (`++a`):** Increments the variable before its value is used in an expression.
- **Post-increment (`a++`):** Uses the variable's original value in an expression, then increments it.

Pre-decrement and post-decrement follow the same principle, decreasing the variable by one.

When used as standalone statements, both pre-increment and post-increment increase the variable by one. Similarly, both decrement forms decrease it by one.

## Practical Implementation

The arithmetic program combines addition, subtraction, multiplication, division, modulus, increment, and decrement operations.

### Sample Output

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
