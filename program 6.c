#include <stdio.h>
#include <stdlib.h>

// Practical 6: Train Ticket Booking System using Linked List

typedef struct Node { int ticket; struct Node *next; } Node;
Node *confirmed = NULL, *waiting = NULL;
int seats = 4;
const int fare = 500;

void append(Node **head, int ticket) {
    Node *node = malloc(sizeof(*node));
    if (!node) { printf("Memory allocation failed.\n"); exit(1); }
    node->ticket = ticket; node->next = NULL;
    if (*head == NULL) { *head = node; return; }
    Node *p = *head; while (p->next) p = p->next; p->next = node;
}
void book(int ticket) {
    if (seats > 0) { append(&confirmed, ticket); seats--; printf("Ticket %d confirmed. Fare = Rs.%d\n", ticket, fare); }
    else { append(&waiting, ticket); printf("No seat available. Ticket %d added to waiting list.\n", ticket); }
}
void cancelTicket(int ticket) {
    Node *p = confirmed, *prev = NULL;
    while (p && p->ticket != ticket) { prev = p; p = p->next; }
    if (!p) { printf("Confirmed ticket %d not found.\n", ticket); return; }
    if (prev) prev->next = p->next; else confirmed = p->next;
    free(p); printf("Ticket %d cancelled. Refund = Rs.%d\n", ticket, fare);
    if (waiting) { p = waiting; waiting = waiting->next; append(&confirmed, p->ticket); printf("Ticket %d is now confirmed.\n", p->ticket); free(p); }
    else seats++;
}
void display(void) {
    Node *p; printf("Confirmed: "); for (p = confirmed; p; p = p->next) printf("%d ", p->ticket);
    printf("\nWaiting: "); for (p = waiting; p; p = p->next) printf("%d ", p->ticket); printf("\n");
}
void freeList(Node *p) { while (p) { Node *next = p->next; free(p); p = next; } }
int main(void) {
    int choice, ticket;
    do {
        printf("\n1. Book ticket\n2. Cancel ticket\n3. Display\n4. Exit\nEnter choice: ");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 1) { printf("Enter ticket number: "); scanf("%d", &ticket); book(ticket); }
        else if (choice == 2) { printf("Enter ticket number: "); scanf("%d", &ticket); cancelTicket(ticket); }
        else if (choice == 3) display();
        else if (choice != 4) printf("Invalid choice.\n");
    } while (choice != 4);
    freeList(confirmed); freeList(waiting); return 0;
}
