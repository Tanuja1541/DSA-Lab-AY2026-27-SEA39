# Practical 7 — Dynamic Text Editor using Singly Linked List

## Problem statement
Maintain a dynamic list of college names with display, insertion at a position, and deletion by position.

## Aim / objective
To implement the above task in C and observe how the selected data structure or algorithm processes the input.

## Data structure / concepts
Singly linked list; dynamic memory allocation.

## Algorithm / approach
Create initial nodes, traverse to display, link a new node at the requested 1-based position, or unlink and free the selected node.

## Flowchart (text form)
```text
Start → Build initial list → Menu → Display/Insert/Delete → Validate position → Repeat until Exit → Free nodes → Stop.
```

## Sample input
```text
COEP
0
1
4
```

## Sample output (illustrative)
```text
College List: COEP -> NULL
```

## Test cases
- **Normal:** Create an empty list.
- **Boundary / invalid:**  use invalid position..
- **Additional checks:** Test the relevant menu operations and verify the output against the entered data.

## Time and space complexity
Display: O(n); insert/delete at position: O(n) worst case; insert at head: O(1). Auxiliary space: O(n) for list nodes.

## Compile and run
Use a standard C compiler such as GCC or Code::Blocks. In the practical folder, run:

```bash
gcc program.c -o program
./program
```

On Windows, run `program.exe` after compiling. The program is written in standard C style and the source file contains only the code (no student name or roll-number comments).

## Conclusion
The program demonstrates the selected data structure or algorithm and its basic operations. Test the normal and boundary cases before committing updates to the repository.
