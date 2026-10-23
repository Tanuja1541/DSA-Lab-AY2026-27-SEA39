#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Practical 7: Dynamic Text Editor using Singly Linked List

typedef struct Node { char data[30]; struct Node *next; } Node;
Node *head = NULL;

void display(void) {
    Node *p = head;
    printf("College List: ");
    while (p) { printf("%s -> ", p->data); p = p->next; }
    printf("NULL\n");
}
void insertAt(int pos, const char *value) {
    if (pos < 1) { printf("Invalid position.\n"); return; }
    Node *node = malloc(sizeof(*node));
    if (!node) { printf("Memory allocation failed.\n"); exit(1); }
    strncpy(node->data, value, sizeof(node->data)-1); node->data[sizeof(node->data)-1] = '\0';
    if (pos == 1) { node->next = head; head = node; return; }
    Node *p = head;
    for (int i = 1; i < pos-1 && p; i++) p = p->next;
    if (!p) { printf("Invalid position.\n"); free(node); return; }
    node->next = p->next; p->next = node;
}
void deleteAt(int pos) {
    if (pos < 1 || !head) { printf("Invalid position or empty list.\n"); return; }
    Node *p = head;
    if (pos == 1) { head = head->next; free(p); return; }
    for (int i = 1; i < pos-1 && p; i++) p = p->next;
    if (!p || !p->next) { printf("Invalid position.\n"); return; }
    Node *remove = p->next; p->next = remove->next; free(remove);
}
int main(void) {
    int choice, pos; char value[30];
    // Initial list creation
    int more = 1;
    while (more == 1) {
        printf("Enter college name (no spaces): "); scanf("%29s", value);
        Node *node = malloc(sizeof(*node));
        if (!node) { printf("Memory allocation failed.\n"); return 1; }
        strncpy(node->data, value, sizeof(node->data)-1); node->data[sizeof(node->data)-1] = '\0'; node->next = NULL;
        if (!head) head = node; else { Node *tail = head; while (tail->next) tail = tail->next; tail->next = node; }
        printf("Enter 1 to add another, 0 to finish: "); scanf("%d", &more);
    }
    do {
        printf("\n1. Display\n2. Insert\n3. Delete\n4. Exit\nEnter choice: ");
        if (scanf("%d", &choice) != 1) break;
        if (choice == 1) display();
        else if (choice == 2) { printf("Enter college name: "); scanf("%29s", value); printf("Enter position: "); scanf("%d", &pos); insertAt(pos, value); }
        else if (choice == 3) { printf("Enter position to delete: "); scanf("%d", &pos); deleteAt(pos); }
        else if (choice != 4) printf("Invalid choice.\n");
    } while (choice != 4);
    while (head) { Node *next = head->next; free(head); head = next; }
    return 0;
}
