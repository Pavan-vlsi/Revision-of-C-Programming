# Decision Making in C

Decision-making statements control the flow of program execution based on the result of a condition.

In C, a condition evaluates to:
- **True:** Any non-zero value.
- **False:** Zero.

## 1. `if` Statement

The `if` statement executes a block of statements only when the specified condition is true.

**Syntax:**

​```c
if (condition)
{
    statements;
}
​```

If the condition is false, the block is skipped.

## 2. `if-else` Statement

The `if-else` statement provides two alternative execution paths.

- If the condition is true, the `if` block executes.
- If the condition is false, the `else` block executes.
- Only one of the two blocks is executed.

**Syntax:**

​```c
if (condition)
{
    statements;
}
else
{
    statements;
}
​```

## 3. Nested `if-else` Statement

A nested `if-else` statement is an `if-else` statement placed inside another `if` or `else` block.

It is used when a decision depends on multiple conditions that need to be checked in stages.

**Syntax:**

​```c
if (condition1)
{
    if (condition2)
    {
        statements;
    }
    else
    {
        statements;
    }
}
else
{
    statements;
}
​```

## 4. `else-if` Ladder

The `else-if` ladder is used to check multiple conditions in sequence.

- Conditions are evaluated from top to bottom.
- The block associated with the first true condition is executed.
- The remaining conditions are skipped.
- The final `else` block is optional and executes when none of the preceding conditions is true.

**Syntax:**

​```c
if (condition1)
{
    statements;
}
else if (condition2)
{
    statements;
}
else if (condition3)
{
    statements;
}
else
{
    statements;
}
​```

## 5. `switch` Statement

The `switch` statement is a multi-branch decision-making statement. It selects a block of code based on the value of an expression.

**Syntax:**

​```c
switch (expression)
{
    case constant1:
        statements;
        break;

    case constant2:
        statements;
        break;

    default:
        statements;
}
​```

**Important points:**

- The expression must have an integer-compatible type, such as `int` or `char`, or an enumeration type.
- Each `case` label must have a unique integer constant expression.
- `break` terminates the switch statement and transfers control outside it.
- Without `break`, execution continues into the following case labels. This is called fall-through.
- `default` is optional and executes when no case matches.
- Only one matching case is selected initially.

## Key Differences

| Statement | Purpose |
|---|---|
| `if` | Checks a single condition. |
| `if-else` | Selects between two alternatives. |
| Nested `if-else` | Checks conditions within other decision blocks. |
| `else-if` ladder | Checks multiple conditions sequentially. |
| `switch` | Selects a branch based on matching values. |
