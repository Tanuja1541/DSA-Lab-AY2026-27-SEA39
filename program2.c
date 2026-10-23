#include <stdio.h>
#include <string.h>

// Practical 2: Student Result Database Management using Array of Structures

typedef struct {
    int roll_no;
    char name[30];
    char program[20];
    char subject1[20], subject2[20];
    int marks1, marks2, total;
    float average;
} Student;

void create(Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name (no spaces): "); scanf("%29s", s[i].name);
        printf("Roll number: "); scanf("%d", &s[i].roll_no);
        printf("Program: "); scanf("%19s", s[i].program);
        printf("Subject 1: "); scanf("%19s", s[i].subject1);
        printf("Subject 2: "); scanf("%19s", s[i].subject2);
        printf("Subject 1 marks: "); scanf("%d", &s[i].marks1);
        printf("Subject 2 marks: "); scanf("%d", &s[i].marks2);
        s[i].total = s[i].marks1 + s[i].marks2;
        s[i].average = s[i].total / 2.0f;
    }
}

void display(const Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nStudent %d\nName: %s\nRoll no.: %d\nProgram: %s\n", i+1, s[i].name, s[i].roll_no, s[i].program);
        printf("Subject 1: %s (%d)\nSubject 2: %s (%d)\nTotal: %d\nAverage: %.2f\n",
               s[i].subject1, s[i].marks1, s[i].subject2, s[i].marks2, s[i].total, s[i].average);
    }
}

void search(const Student s[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (s[i].roll_no == key) {
            printf("Student found: %s, Roll No.: %d, Total: %d, Average: %.2f\n", s[i].name, s[i].roll_no, s[i].total, s[i].average);
            return;
        }
    }
    printf("Student not found.\n");
}

int main(void) {
    Student students[20];
    int n = 0, choice, key;
    do {
        printf("\nSTUDENT RESULT DATABASE\n1. Create\n2. Display\n3. Search by roll number\n4. Exit\nEnter choice: ");
        if (scanf("%d", &choice) != 1) return 1;
        switch (choice) {
            case 1:
                printf("Number of students (1-20): "); scanf("%d", &n);
                if (n < 1 || n > 20) { printf("Invalid number of students.\n"); n = 0; }
                else create(students, n);
                break;
            case 2: if (n) display(students, n); else printf("Create the database first.\n"); break;
            case 3: if (n) { printf("Enter roll number: "); scanf("%d", &key); search(students, n, key); } else printf("Create the database first.\n"); break;
            case 4: printf("Exiting.\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
    return 0;
}
