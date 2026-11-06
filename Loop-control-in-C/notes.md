# Loop Control in C

## 1. Introduction to Loops

A loop is a control structure that executes a block of statements repeatedly until a specified condition is no longer satisfied.

Loops help avoid writing the same statements multiple times. Instead, a set of instructions can be executed repeatedly using a loop.

### Why Are Loops Important?

- Reduce repetitive code.
- Make programs shorter and easier to maintain.
- Automate repetitive operations.
- Execute statements a specified number of times or until a condition becomes false.

## 2. Types of Loops in C

C provides three main types of loops:

| Loop | Description |
|---|---|
| `while` | Checks the condition before executing the loop body. |
| `do-while` | Executes the loop body first and checks the condition afterward. |
| `for` | Combines initialization, condition checking, and increment/decrement in one statement. |

## 3. While Loop

The `while` loop is an entry-controlled loop, also called a pre-test loop, because the condition is checked before the loop body executes.

- If the condition is true, the loop body executes.
- After execution, the condition is checked again.
- The process continues until the condition becomes false.
- If the condition is initially false, the loop body will not execute even once.

### Syntax

    while (condition)
    {
        statements;
        increment/decrement;
    }

## 4. Do-While Loop

The `do-while` loop is an exit-controlled loop, also called a post-test loop, because the condition is checked after executing the loop body.

- The loop body executes before the condition is checked.
- If the condition is true, the loop repeats.
- If the condition is false, the loop terminates.
- The loop body executes at least once, regardless of the initial condition.

### Syntax

    do
    {
        statements;
        increment/decrement;
    }
    while (condition);

**Important:** A semicolon is required after `while (condition)` in a do-while loop.

## 5. For Loop

The `for` loop is generally used when the number of iterations is known or controlled by a counting variable.

It combines three important expressions:

1. **Initialization:** Initializes the loop control variable. Executed only once at the beginning.
2. **Condition:** Determines whether the loop should continue executing.
3. **Increment/Decrement:** Updates the loop control variable after each iteration.

### Syntax

    for (initialization; condition; increment/decrement)
    {
        statements;
    }

### Execution Order

1. Initialization is performed.
2. The condition is evaluated.
3. If true, the loop body executes.
4. The increment/decrement expression is executed.
5. The condition is evaluated again.
6. The process continues until the condition becomes false.

## 6. Comparison of Loops

| Feature | While | Do-While | For |
|---|---|---|---|
| Control type | Entry-controlled | Exit-controlled | Entry-controlled |
| Condition checking | Before execution | After execution | Before execution |
| Minimum executions | 0 | 1 | 0 |
| Initialization | Usually outside | Usually outside | Inside loop statement |
| Update expression | Inside loop body | Inside loop body | Usually in loop statement |

## 7. Loop Body and Braces

A loop body contains the statements that are executed repeatedly.

Curly braces `{ }` are used to group multiple statements into a loop body.

When only one statement is associated with a loop, braces are optional in C. However, using braces consistently improves readability and helps avoid logical errors.

## 8. Iteration

An iteration refers to one complete execution of the loop body.

For example, if a loop body executes five times, the loop has performed five iterations.

## Key Points

- `while` checks the condition before executing its body.
- `do-while` executes its body at least once before checking the condition.
- `for` combines initialization, condition checking, and updating.
- A loop terminates when its condition becomes false.
- Incorrect condition or update logic can result in an infinite loop.
