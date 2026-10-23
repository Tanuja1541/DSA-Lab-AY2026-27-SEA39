# Practical 1 — Pattern Printing Programs

## Aim / Objective
To practise nested loops and formatted output in C by printing four different patterns.

## Programs Included
Each pattern is a **separate, complete C program** and can be compiled and run independently. `program.c` is Program 1, as requested.

1. **Program 1 — Right-angle number triangle:** `program.c`
2. **Program 2 — Number diamond:** `pattern_2_number_diamond.c`
3. **Program 3 — Asterisk pyramid:** `pattern_3_asterisk_pyramid.c`
4. **Program 4 — Alphabet pyramid:** `pattern_4_alphabet_pyramid.c`

## Concepts Used
- Nested `for` loops
- Integer counters and character arithmetic
- `printf()` and `scanf()` for input/output
- Input validation

## Algorithm (common idea)
1. Read the number of rows from the user.
2. Validate the input; if it is invalid, display an error and stop.
3. Use nested loops to print the selected pattern.
4. For the alphabet pyramid, the row count must be between 1 and 26.

## Sample Output

**Program 1 — input: `4`**
```text
1
12
123
1234
```

**Program 2 — input: `3`**
```text
  1 
 2 2 
3 3 3 
 2 2 
  1 
```

**Program 3 — input: `4`**
```text
   * 
  * * 
 * * * 
* * * * 
```

**Program 4 — input: `4`**
```text
   A
  ABA
 ABCBA
ABCDCBA
```

## Test Cases
- Normal input: enter `4`.
- Boundary input: enter `1`.
- Invalid input: enter `0`, a negative number, or non-numeric text; an error message should appear.
- Alphabet pyramid: enter values from `1` to `26`; values outside this range are rejected.

## Time and Space Complexity
For `n` rows, each program takes **O(n²) time** in the worst case due to nested loops and the number of characters printed. Each uses **O(1) auxiliary space**, excluding output.

## Compile and Run
Run these commands from inside the `Practical-01` folder. Compile and run **one program at a time**.

**Program 1**
```bash
gcc -std=c11 -Wall -Wextra -pedantic program.c -o program1
./program1
```

**Program 2**
```bash
gcc -std=c11 -Wall -Wextra -pedantic pattern_2_number_diamond.c -o program2
./program2
```

**Program 3**
```bash
gcc -std=c11 -Wall -Wextra -pedantic pattern_3_asterisk_pyramid.c -o program3
./program3
```

**Program 4**
```bash
gcc -std=c11 -Wall -Wextra -pedantic pattern_4_alphabet_pyramid.c -o program4
./program4
```

## Conclusion
Four different, independent C source files are included. Each file contains one complete program, matching the separate pattern codes.
