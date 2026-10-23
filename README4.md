# Practical 4 — Decimal to Binary Conversion using Stack

## Problem statement
Convert a non-negative decimal integer into binary using a stack to reverse the remainders.

## Aim / objective
To implement the above task in C and observe how the selected data structure or algorithm processes the input.

## Data structure / concepts
Array-based stack; push and pop/traversal.

## Algorithm / approach
Repeatedly divide the decimal number by 2 and push each remainder. Print the stored remainders in reverse order.

## Flowchart (text form)
```text
Start → Read decimal number → Handle zero → Push remainders while number > 0 → Print stack in reverse → Stop.
```

## Sample input
```text
15
```

## Sample output (illustrative)
```text
1111
```

## Test cases
- **Normal:** Input 15 → 1111.
- **Boundary / invalid:**  reject negative input if using unsigned input semantics..
- **Additional checks:** Test the relevant menu operations and verify the output against the entered data.

## Time and space complexity
For a number with k binary digits: O(log n) time and O(log n) space.

## Compile and run
Use a standard C compiler such as GCC or Code::Blocks. In the practical folder, run:

```bash
gcc program.c -o program
./program
```

On Windows, run `program.exe` after compiling. The program is written in standard C style and the source file contains only the code (no student name or roll-number comments).

## Conclusion
The program demonstrates the selected data structure or algorithm and its basic operations. Test the normal and boundary cases before committing updates to the repository.
