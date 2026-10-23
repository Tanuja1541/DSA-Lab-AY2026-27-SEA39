#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Practical 3: Searching Contact Name Using Sequential and Binary Search

typedef struct { char name[20], phone[20], address[20]; } Contact;

int compareIgnoreCase(const char *a, const char *b) {
    while (*a && *b) {
        char ca = (char)tolower((unsigned char)*a);
        char cb = (char)tolower((unsigned char)*b);
        if (ca != cb) return (unsigned char)ca - (unsigned char)cb;
        a++; b++;
    }
    return (unsigned char)tolower((unsigned char)*a) - (unsigned char)tolower((unsigned char)*b);
}

int main(void) {
    Contact c[20], temp;
    int n, i, linearComparisons = 0, binaryComparisons = 0, found = 0;
    char key[20];
    printf("Enter number of contacts (1-20): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 20) { printf("Invalid number.\n"); return 1; }
    printf("Enter contact details (names should be unique):\n");
    for (i = 0; i < n; i++) {
        printf("\nContact %d\nName: ", i + 1); scanf("%19s", c[i].name);
        printf("Phone: "); scanf("%19s", c[i].phone);
        printf("Address (no spaces): "); scanf("%19s", c[i].address);
    }
    printf("\nContacts entered:\n");
    for (i = 0; i < n; i++) printf("%s\t%s\t%s\n", c[i].name, c[i].phone, c[i].address);
    printf("Enter name to search: "); scanf("%19s", key);
    printf("\n--- Linear Search ---\n");
    for (i = 0; i < n; i++) {
        linearComparisons++;
        if (compareIgnoreCase(key, c[i].name) == 0) {
            printf("CONTACT FOUND\nName: %s\nPhone: %s\nAddress: %s\n", c[i].name, c[i].phone, c[i].address);
            found = 1; break;
        }
    }
    if (!found) printf("CONTACT NOT FOUND\n");
    printf("Linear comparisons: %d\n", linearComparisons);
    // Binary search requires the contacts to be sorted by name.
    for (i = 0; i < n - 1; i++) for (int j = 0; j < n - i - 1; j++)
        if (compareIgnoreCase(c[j].name, c[j+1].name) > 0) { temp = c[j]; c[j] = c[j+1]; c[j+1] = temp; }
    int low = 0, high = n - 1, mid, binaryFound = 0;
    printf("\n--- Binary Search (sorted names) ---\n");
    while (low <= high) {
        mid = (low + high) / 2; binaryComparisons++;
        int cmp = compareIgnoreCase(c[mid].name, key);
        if (cmp == 0) { printf("Contact found at sorted location %d\n", mid + 1); binaryFound = 1; break; }
        if (cmp < 0) low = mid + 1; else high = mid - 1;
    }
    if (!binaryFound) printf("CONTACT NOT FOUND\n");
    printf("Binary comparisons: %d\n", binaryComparisons);
    return 0;
}
