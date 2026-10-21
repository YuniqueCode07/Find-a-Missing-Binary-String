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

## License

This project is available for educational purposes.
