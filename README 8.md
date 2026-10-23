# Practical 8 — Online Directory using Binary Search Tree

## Problem statement
Store contacts by name in a binary search tree, display inorder/preorder/postorder traversals, and search by name.

## Aim / objective
To implement the above task in C and observe how the selected data structure or algorithm processes the input.

## Data structure / concepts
Binary search tree; recursion; tree traversals.

## Algorithm / approach
Insert names lexicographically. Compare the search key with each node to move left or right. Traverse recursively in the requested order.

## Flowchart (text form)
```text
Start → Menu → Insert/Traversal/Search → Compare and traverse tree → Repeat until Exit → Free tree → Stop.
```

## Sample input
```text
1
Asha
123456
3
Asha
4
```

## Sample output (illustrative)
```text
Contact found!
Name: Asha
Mobile: 123456
```

## Test cases
- **Normal:** Insert names in mixed order.
- **Boundary / invalid:**  try duplicate name..
- **Additional checks:** Test the relevant menu operations and verify the output against the entered data.

## Time and space complexity
Insert/search: O(h), average O(log n), worst O(n); each traversal: O(n). Auxiliary space: O(n) for tree; recursive stack O(h).

## Compile and run
Use a standard C compiler such as GCC or Code::Blocks. In the practical folder, run:

```bash
gcc program.c -o program
./program
```

On Windows, run `program.exe` after compiling. The program is written in standard C style and the source file contains only the code (no student name or roll-number comments).

## Conclusion
The program demonstrates the selected data structure or algorithm and its basic operations. Test the normal and boundary cases before committing updates to the repository.
