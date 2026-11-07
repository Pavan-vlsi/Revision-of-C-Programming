# Jump Statements in C

## 1. Introduction

Jump statements are used to transfer the normal flow of program execution to another part of the program.

C provides the following jump statements:

- `break`
- `continue`
- `goto`
- `return`

The `break`, `continue`, and `goto` statements provide additional control over program execution.

## 2. break Statement

The `break` statement immediately terminates the nearest enclosing loop or `switch` statement when it is encountered.

After termination, program execution continues with the statement immediately following that loop or `switch`.

### Syntax

    break;

### Important Points

- Used with `for`, `while`, and `do-while` loops.
- Also used inside `switch` statements.
- In nested loops, it terminates only the innermost enclosing loop.
- It provides an immediate exit from the current loop or switch.

## 3. continue Statement

The `continue` statement skips the remaining statements in the current loop iteration and proceeds to the next iteration.

Unlike `break`, it does not terminate the loop.

### Syntax

    continue;

### Important Points

- Used only with looping statements.
- In nested loops, it affects only the innermost enclosing loop.
- It skips the remaining statements in the current iteration.
- The next iteration begins according to the loop type.

### Behaviour in Different Loops

- **for loop:** The update expression executes before the next condition check.
- **while loop:** Control moves to the next condition check.
- **do-while loop:** Control moves to the condition check at the end of the loop.

## 4. goto Statement

The `goto` statement transfers program control directly to a specified labelled statement within the same function.

A label is an identifier followed by a colon (`:`).

### Syntax

    goto label;

    // Other statements

    label:
        statement;

### Important Points

- A label must be followed by a colon.
- The label must be within the same function as the corresponding `goto` statement.
- Control transfers directly to the specified label.
- A `goto` statement can transfer control forward or backward within the function.
- Excessive use of `goto` can make programs difficult to read, understand, and maintain.

## 5. Difference Between break, continue and goto

| Statement | Function |
|---|---|
| `break` | Terminates the nearest enclosing loop or switch. |
| `continue` | Skips the remaining statements in the current loop iteration. |
| `goto` | Transfers control to a specified labelled statement within the same function. |

## Key Points

- `break` exits a loop or switch immediately.
- `continue` skips the current iteration without terminating the loop.
- `goto` performs an unconditional jump to a labelled statement.
- `break` and `continue` are commonly used with loops and decision-making logic.
- Structured control statements are generally preferred over unnecessary use of `goto`.
