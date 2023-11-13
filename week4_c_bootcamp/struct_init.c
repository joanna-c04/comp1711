#include <stdio.h>
#include <string.h>

struct student {
    char name [20];
    char student_id [11]; // Assuming 10 digits.
    int mark;
};

int main () {
    struct student new_student;
    printf("What is your name? \n");
    scanf("%s", new_student.name);
    printf("What is your mark?\n");
    scanf("%d", &new_student.mark);
    printf("What is your student ID?\n");
    scanf("%s", new_student.student_id);
    printf("Student name: %s\n", new_student.name);
    printf("Student ID:   %s\n", new_student.student_id);
    printf("Final mark:   %d\n", new_student.mark);
    return 0;
}