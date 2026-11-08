# Jump Statements in C – Practical Implementation

## Program Overview

This program demonstrates the use of `break`, `continue`, and `goto` statements through a simple billing system.

The program accepts the prices of up to five items and calculates the total bill while handling invalid prices, early termination, and budget limits.

## Working

- **continue:** If an entered price is negative, it is considered invalid and skipped.
- **break:** If the entered price is zero, item scanning is terminated immediately.
- **goto:** If the accumulated total exceeds 500, control jumps to the `over_budget` label and displays a budget warning.

## Tested Outputs

### Test 1: Skipping an Invalid Price

    Enter the price of 5 items :
    7
    -9
    Invalid pricing,skipping this item
    6
    8
    4

    Final Bill Total:25

### Test 2: Terminating Input Using break

    Enter the price of 5 items :
    90
    0
    Ending item scanning ,done pricing

    Final Bill Total:90

### Test 3: Exceeding the Budget Using goto

    Enter the price of 5 items :
    60
    40
    350
    49
    12
    Budget limit exceeded(500)

### Test 4: Early Termination with a Different Price

    Enter the price of 5 items :
    99
    0
    Ending item scanning ,done pricing
    Final Bill Total:99

### Test 5: Skipping an Invalid Price and Continuing

    Enter the price of 5 items :
    -99
    Invalid pricing,skipping this item
    88
    44
    55
    7
    Final Bill Total:194

## Conclusion

The program demonstrates how jump statements alter the normal flow of execution in C.

- `continue` skips the remaining statements in the current iteration.
- `break` terminates the nearest enclosing loop.
- `goto` transfers control to a specified labelled statement within the same function.

## Important Observation

The budget condition used in the program is `total > 500`.

Therefore:
- A total of exactly 500 is accepted.
- A total greater than 500 triggers the budget-exceeded message.
