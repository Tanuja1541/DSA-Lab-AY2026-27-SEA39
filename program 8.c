#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Practical 8: Online Directory System using Binary Search Tree

typedef struct Node { char name[30], mobile[15]; struct Node *left, *right; } Node;
Node *createNode(const char *name, const char *mobile) {
    Node *p = malloc(sizeof(*p)); if (!p) { printf("Memory allocation failed.\n"); exit(1); }
    strcpy(p->name, name); strcpy(p->mobile, mobile); p->left = p->right = NULL; return p;
}
Node *insert(Node *root, const char *name, const char *mobile) {
    if (!root) return createNode(name, mobile);
    int cmp = strcmp(name, root->name);
    if (cmp < 0) root->left = insert(root->left, name, mobile);
    else if (cmp > 0) root->right = insert(root->right, name, mobile);
    else printf("A contact with this name already exists.\n");
    return root;
}
void inorder(Node *r) { if (r) { inorder(r->left); printf("%s\t%s\n", r->name, r->mobile); inorder(r->right); } }
void preorder(Node *r) { if (r) { printf("%s\t%s\n", r->name, r->mobile); preorder(r->left); preorder(r->right); } }
void postorder(Node *r) { if (r) { postorder(r->left); postorder(r->right); printf("%s\t%s\n", r->name, r->mobile); } }
void search(Node *r, const char *name) {
    while (r) { int cmp = strcmp(name, r->name); if (cmp == 0) { printf("Contact found!\nName: %s\nMobile: %s\n", r->name, r->mobile); return; } r = cmp < 0 ? r->left : r->right; }
    printf("Contact not found.\n");
}
void freeTree(Node *r) { if (r) { freeTree(r->left); freeTree(r->right); free(r); } }
int main(void) {
    Node *root = NULL; int choice; char name[30], mobile[15];
    do {
        printf("\nONLINE DIRECTORY SYSTEM\n1. Create/Insert\n2. Display all traversals\n3. Search\n4. Exit\nEnter choice: ");
        if (scanf("%d", &choice) != 1) break;
        switch (choice) {
            case 1: printf("Enter name: "); scanf("%29s", name); printf("Enter mobile number: "); scanf("%14s", mobile); root = insert(root, name, mobile); break;
            case 2: printf("\nINORDER\nName\tMobile\n"); inorder(root); printf("\nPREORDER\nName\tMobile\n"); preorder(root); printf("\nPOSTORDER\nName\tMobile\n"); postorder(root); break;
            case 3: printf("Enter name to search: "); scanf("%29s", name); search(root, name); break;
            case 4: printf("Exiting program.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    freeTree(root); return 0;
}
