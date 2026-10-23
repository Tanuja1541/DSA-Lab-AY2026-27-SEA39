# Practical 3 — Contact Search using Sequential and Binary Search

## Problem statement
Store contact records, search a name linearly, then sort contacts and search using binary search.

## Aim / objective
To implement the above task in C and observe how the selected data structure or algorithm processes the input.

## Data structure / concepts
Array of structures; linear search; bubble sort; binary search.

## Algorithm / approach
Linear search checks each contact. Sort the array by name before binary search, then repeatedly halve the search interval.

## Flowchart (text form)
```text
Start → Read contacts → Linear search → Sort contacts → Binary search → Show comparisons/results → Stop.
```

## Sample input
```text
2
Neel 9876 Pune
Asha 1234 Satara
asha
```

## Sample output (illustrative)
```text
Linear search: CONTACT FOUND
Binary search: Contact found
```

## Test cases
- **Normal:** Find first, middle, and last contact.
- **Boundary / invalid:**  names are treated case-insensitively..
- **Additional checks:** Test the relevant menu operations and verify the output against the entered data.

## Time and space complexity
Linear search: O(n). Bubble sort: O(n²). Binary search after sorting: O(log n); overall including sorting: O(n²). Auxiliary space: O(n) for records and O(1) extra for swaps/search.

## Compile and run
Use a standard C compiler such as GCC or Code::Blocks. In the practical folder, run:

```bash
gcc program.c -o program
./program
```

On Windows, run `program.exe` after compiling. The program is written in standard C style and the source file contains only the code (no student name or roll-number comments).

## Conclusion
The program demonstrates the selected data structure or algorithm and its basic operations. Test the normal and boundary cases before committing updates to the repository.
