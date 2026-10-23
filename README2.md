# Practical 2 — Student Result Database Management using Array of Structures

## Problem statement
Store student details, calculate total and average marks, display records, and search by roll number.

## Aim / objective
To implement the above task in C and observe how the selected data structure or algorithm processes the input.

## Data structure / concepts
Array of structures; linear search.

## Algorithm / approach
Read up to 20 student records; calculate total and average; display all records or compare each roll number with the search key.

## Flowchart (text form)
```text
Start → Menu → Create/Display/Search → Validate and process records → Repeat or Exit → Stop.
```

## Sample input
```text
1
2
Asha
101
ENTC
DSA
DE
90
95
Ravi
102
ENTC
DSA
DE
80
85
2
4
```

## Sample output (illustrative)
```text
Total: 185, Average: 92.50
Total: 165, Average: 82.50
```

## Test cases
- **Normal:** Create 2 students.
- **Boundary / invalid:**  reject student count 0 or greater than 20..
- **Additional checks:** Test the relevant menu operations and verify the output against the entered data.

## Time and space complexity
Create: O(n); display: O(n); search: O(n) worst case. Auxiliary space: O(n) for the student array.

## Compile and run
Use a standard C compiler such as GCC or Code::Blocks. In the practical folder, run:

```bash
gcc program.c -o program
./program
```

On Windows, run `program.exe` after compiling. The program is written in standard C style and the source file contains only the code (no student name or roll-number comments).

## Conclusion
The program demonstrates the selected data structure or algorithm and its basic operations. Test the normal and boundary cases before committing updates to the repository.
