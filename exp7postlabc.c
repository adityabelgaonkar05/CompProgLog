#include <stdio.h>
#include <stdlib.h>

struct student_details {
    int roll_no;
    char name[20];
    float marks;
};

void descending_sort(struct student_details details[], int n) {
    struct student_details temp;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (details[i].marks < details[j].marks) {
                temp = details[i];
                details[i] = details[j];
                details[j] = temp;
            }
        }
    }
}

int main() {
    struct student_details details[10];

    for(int i = 0; i < 10; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Enter roll no: ");
        scanf("%d", &details[i].roll_no);
        printf("Enter name of student: ");
        scanf("%s", details[i].name);
        printf("Enter marks for student in percentage out of 100: ");
        scanf("%f", &details[i].marks);
    }

    descending_sort(details, 10);

    printf("Details of students in decreasing order of percentage:\n");
    for(int i = 0; i < 10; i++) {
        printf("Roll No: %d, Name: %s, Percentage: %.2f\n", details[i].roll_no,
               details[i].name, details[i].marks);
    }

    return 0;
}
