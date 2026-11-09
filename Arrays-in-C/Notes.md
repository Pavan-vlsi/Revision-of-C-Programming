# Arrays in C Programming

## 1. Introduction to Arrays

An array is a collection of elements of the same data type stored in contiguous memory locations and referred to by a common name.

Each value stored in an array is called an element. Individual elements are accessed using an index (also called a subscript).

Arrays can store different types of data, such as integers, characters and floating-point numbers, provided all elements in an individual array have the same data type.

## 2. Why Are Arrays Important?

A normal variable can store only one value at a time. When multiple values of the same data type need to be stored, declaring separate variables becomes inconvenient.

Arrays solve this problem by allowing multiple values to be stored under a single variable name.

### Advantages of Arrays

- Store multiple values using a common name.
- Simplify handling of large collections of data.
- Allow individual elements to be accessed using indexes.
- Make repetitive operations on data easier using loops.
- Organize data efficiently in contiguous memory locations.

## 3. Array Declaration

An array must be declared before it can be used so that the compiler knows its data type, name and size.

### Syntax

    data_type array_name[size];

Where:

- `data_type`: Specifies the type of elements stored in the array.
- `array_name`: Specifies the name of the array.
- `size`: Specifies the number of elements the array can hold.

### Examples

    int a[3] = {2, 3, 5};
    char ch[20] = "IIMS";
    float marks[3] = {5003.23, 1940.32, 123.20};

## 4. Array Indexing

Each element in an array is accessed using its index.

In C, array indexing starts from **0**, not 1.

For an array of size N:

- First element: Index 0
- Second element: Index 1
- Last element: Index N-1

For example, an array declared as `int a[5]` has five elements with indexes ranging from 0 to 4.

Accessing an element outside the valid index range results in undefined behaviour in C.

## 5. Types of Arrays

Arrays in C are mainly classified into:

1. Single-Dimensional Arrays
2. Multidimensional Arrays

## 6. Single-Dimensional Arrays

A single-dimensional array is a linear collection of elements of the same data type.

It stores elements in a single sequence, and each element is accessed using one index.

### Declaration

    data_type array_name[size];

### Characteristics

- Contains elements of the same data type.
- Uses a single index to access elements.
- Elements are stored in contiguous memory locations.
- Indexing begins at 0.
- The last valid index is one less than the array size.

## 7. Multidimensional Arrays

A multidimensional array is an array containing two or more dimensions.

The simplest form is a two-dimensional array, which is also called a matrix.

In C, multidimensional arrays are implemented as arrays of arrays.

### Declaration Syntax

    data_type array_name[d1][d2][d3]...[dn];

Where each dimension specifies the size of that particular dimension.

## 8. Two-Dimensional Arrays

A two-dimensional array organizes elements into rows and columns, similar to a mathematical matrix.

### Syntax

    data_type array_name[rows][columns];

### Example

    int marks[3][4];

This declares a two-dimensional integer array containing:

- 3 rows
- 4 columns
- 12 elements in total

### Characteristics

- Uses two indexes to access an element.
- The first index represents the row.
- The second index represents the column.
- Elements are stored in contiguous memory locations.
- C stores two-dimensional arrays in row-major order, meaning elements of each row are stored consecutively.

## 9. Higher-Dimensional Arrays

C also supports arrays with more than two dimensions.

For example:

    int a[2][3][4];

This declares a three-dimensional array containing 24 integer elements.

Higher-dimensional arrays use additional indexes to identify individual elements.

## 10. Character Arrays and Strings

A character array stores a sequence of characters.

In C, a string is represented as a character array terminated by a special null character (`'\0'`).

The null character marks the end of the string.

For example:

    char name[20] = "IIMS";

The character array contains the characters of the string followed by the null terminator.

**Important:** The array size must provide sufficient space for all characters and the terminating null character when storing a C string.

## Key Points

- An array stores multiple elements of the same data type.
- Array elements are stored in contiguous memory locations.
- Array indexing starts from 0.
- Single-dimensional arrays use one index.
- Two-dimensional arrays use row and column indexes.
- Multidimensional arrays can have two or more dimensions.
- C uses row-major order for storing multidimensional arrays.
- Strings in C are character arrays terminated by `'\0'`.
- Accessing an array outside its valid index range results in undefined behaviour.
