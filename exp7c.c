#include <stdio.h>
#include <stdlib.h>

struct employee {
    int id;
    char name[20];
    char dept[20];
    float salary;
};

void add_employee(struct employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter employee id: ");
        scanf("%d", &emp[i].id);
        printf("Enter the employee name: ");
        scanf("%s", emp[i].name);
        printf("Enter the employee department: ");
        scanf("%s", emp[i].dept);
        printf("Enter the employee salary: ");
        scanf("%f", &emp[i].salary);
    }
}

void print_employees(struct employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Employee %d\n", i + 1);
        printf("ID: %d\n", emp[i].id);
        printf("Name: %s\n", emp[i].name);
        printf("Department: %s\n", emp[i].dept);
        printf("Salary: %.2f\n", emp[i].salary);

        printf("\n");
    }
}

void update_employee(struct employee emp[], int n) {
    int t, choice;
    printf("Enter the employee id you want to update: ");
    scanf("%d", &t);
    int employee_found = 0;
    for (int i = 0; i < n; i++) {
        if (t == emp[i].id) {
            employee_found = 1;
            printf("Employee found! Please select what you want to update:\n");
            printf("1. Name\n");
            printf("2. Department\n");
            scanf("%d", &choice);
            switch (choice) {
                case 1:
                    printf("Enter new name: ");
                    scanf("%s", emp[i].name);
                    break;
                case 2:
                    printf("Enter new department: ");
                    scanf("%s", emp[i].dept);
                    break;
                default:
                    printf("Invalid choice\n");
            }
        }
    }
    if (!employee_found) {
        printf("Employee ID not found.\n");
    }
}

int main() {
    int n;
    printf("Aditya Belgaonkar 16010123026\n");
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];
    int choice;
    do {
        printf("Enter 1) Add employee, 2) Print employee details, 3) Update employee info, or 4) Exit: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                add_employee(emp, n);
                break;
            case 2:
                print_employees(emp, n);
                break;
            case 3:
                update_employee(emp, n);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice\n");
        }
    } while (choice != 4);
    return 0;
}
