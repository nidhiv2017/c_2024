#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    float gpa;
} Student;

int main() {
    Student students[3];

    strcpy(students[0].name, "John");
    students[0].age = 20;
    students[0].gpa = 3.5;

    strcpy(students[1].name, "Alice");
    students[1].age = 21;
    students[1].gpa = 3.8;

    strcpy(students[2].name, "Bob");
    students[2].age = 22;
    students[2].gpa = 3.2;

    for (int i = 0; i < 3; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("GPA: %.2f\n", students[i].gpa);
        printf("\n");
    }

    return 0;
}
