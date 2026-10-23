# Practical 9 — Graph Traversal for Campus Navigation using BFS and DFS

## Problem statement
Represent buildings and paths as an undirected graph and traverse reachable buildings using DFS and BFS.

## Aim / objective
To implement the above task in C and observe how the selected data structure or algorithm processes the input.

## Data structure / concepts
Adjacency matrix; graph; depth-first search; breadth-first search; queue.

## Algorithm / approach
Read vertices and edges into an adjacency matrix. DFS recursively visits neighbours; BFS visits neighbours level by level using a queue.

## Flowchart (text form)
```text
Start → Read graph → Validate input → Print matrix → Read start vertex → Run DFS and BFS → Stop.
```

## Sample input
```text
3
2
0 1
1 2
0
```

## Sample output (illustrative)
```text
DFS: 0 1 2
BFS: 0 1 2
```

## Test cases
- **Normal:** Use 5 buildings and 6 paths.
- **Boundary / invalid:**  reject invalid vertex count or edge endpoint..
- **Additional checks:** Test the relevant menu operations and verify the output against the entered data.

## Time and space complexity
With adjacency matrix: DFS O(V²), BFS O(V²); adjacency matrix space O(V²), traversal arrays/queue O(V).

## Compile and run
Use a standard C compiler such as GCC or Code::Blocks. In the practical folder, run:

```bash
gcc program.c -o program
./program
```

On Windows, run `program.exe` after compiling. The program is written in standard C style and the source file contains only the code (no student name or roll-number comments).

## Conclusion
The program demonstrates the selected data structure or algorithm and its basic operations. Test the normal and boundary cases before committing updates to the repository.
