# Find a Missing Binary String

## Description

This project implements an algorithm in C to find a binary string of length `n` that does not appear in a given array of `n` unique binary strings, each of length `n`.

The solution uses a **diagonalization technique** to construct a binary string guaranteed to differ from every string in the input array.

## How It Works

1. Read the length `n` of the array.
2. Input `n` unique binary strings, each containing exactly `n` bits.
3. Examine the diagonal bits of the array.
4. Invert each diagonal bit (`0` becomes `1`, and `1` becomes `0`) to construct a new binary string.
5. Return and display the resulting string.

Because the generated string differs from the *i*-th input string at position *i*, it cannot be equal to any string in the array.

## Example

**Input:**

```text
n = 3

001
100
110
```

**Output:**

```text
010
```

The output has length `3` and does not appear in the input array.

## Complexity Analysis

- **Time Complexity:** `O(n)` — the algorithm examines one diagonal bit per input string.
- **Auxiliary Space Complexity:** `O(n)` — the algorithm allocates memory for the resulting binary string.

## Technologies

- Language: C
- Standard libraries: `stdio.h`, `stdlib.h`
- Dynamic memory allocation with `malloc()` and `free()`

## Compilation and Execution

Compile the program using GCC:

```bash
gcc main.c -o missing_binary_string
```

Run it:

```bash
./missing_binary_string
```

## Concepts Practiced

- Two-dimensional arrays
- Strings in C
- Functions and return values
- Pointers
- Dynamic memory allocation
- Input validation
- Time and space complexity
- Algorithmic problem-solving

## Compilation and Execution

### Requirements

- GCC (GNU Compiler Collection)
- A Linux terminal or another environment that supports C and variable-length arrays (VLAs)

### 1. Clone the Repository

```bash
git clone https://github.com/YuniqueCode07/Find-a-Missing-Binary-String.git
cd Find-a-Missing-Binary-String
```

### 2. Compile the Program

```bash
gcc -std=c11 -Wall -Wextra Find-a-Missing-Binary-String.c -o missing_binary_string
```

### 3. Run the Program

```bash
./missing_binary_string
```

### Example

```text
Give me the length of the table (strictly positive): 3
Give me the digit number 1 of the number n°1. You must enter 0 or 1: 0
Give me the digit number 2 of the number n°1. You must enter 0 or 1: 0
Give me the digit number 3 of the number n°1. You must enter 0 or 1: 1
...
111
```

The program prompts the user to enter the bits of each binary string individually, then displays a binary string that is absent from the input array.

## License

This project is available for educational purposes.
