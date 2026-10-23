# Practical 6 — Train Ticket Booking System using Linked List

## Problem statement
Book confirmed tickets up to available capacity, place extra bookings in a waiting list, cancel tickets, and promote the first waiting ticket.

## Aim / objective
To implement the above task in C and observe how the selected data structure or algorithm processes the input.

## Data structure / concepts
Singly linked lists; dynamic memory; FIFO waiting list.

## Algorithm / approach
Append tickets to confirmed or waiting lists. On cancellation, remove the matching confirmed node and promote the first waiting ticket if present.

## Flowchart (text form)
```text
Start → Menu → Book/Cancel/Display → Update linked lists and seats → Repeat until Exit → Free memory → Stop.
```

## Sample input
```text
1
11
1
12
3
4
```

## Sample output (illustrative)
```text
Ticket 11 confirmed. Fare = Rs.500
Ticket 12 confirmed. Fare = Rs.500
```

## Test cases
- **Normal:** Book 4 tickets then a fifth to waiting list.
- **Boundary / invalid:**  exit..
- **Additional checks:** Test the relevant menu operations and verify the output against the entered data.

## Time and space complexity
Append-based booking: O(n) per append; cancellation: O(n); display: O(c+w). Auxiliary space: O(c+w) nodes, where c and w are confirmed and waiting tickets.

## Compile and run
Use a standard C compiler such as GCC or Code::Blocks. In the practical folder, run:

```bash
gcc program.c -o program
./program
```

On Windows, run `program.exe` after compiling. The program is written in standard C style and the source file contains only the code (no student name or roll-number comments).

## Conclusion
The program demonstrates the selected data structure or algorithm and its basic operations. Test the normal and boundary cases before committing updates to the repository.
