#include <stdlib.h>
#include <stdio.h>

struct employee {
    int id;
    char name[100];
    char depart[100];
    float salary;
};

struct employee company[100];

struct employee addEmployee()
{
    struct employee newemployee;
    printf("\nEnter id, name, department, and salary: ");
    scanf("%d %s %s %f", &newemployee.id, &newemployee.name, &newemployee.depart, &newemployee.salary);
    return newemployee;
}

void printEmployeeDetails(struct employee company[], int countemployees)
{
    int inp;
    printf("Enter id: ");
    scanf("%d", &inp);
    int i;
    for(i = 0; i < countemployees; ++i)
    {
        if(company[i].id == inp) 
        {
            printf("\nid: %d\nname: %s\ndepartment: %s\nSalary: %f\n", company[i].id, company[i].name, company[i].depart, company[i].salary);
            return;
        }
    }

    printf("\nemployee doesnt exist\n");
}

void updateEmployeeInfo(struct employee company[], int countemployees)
{
    printf("\nEnter id: ");
    int inp; scanf("%d", inp);
    int i;
    for(i = 0; i < countemployees; ++i)
    {
        if(company[i].id == inp)
        {
            printf("\nEnter updated name and department: ");
            scanf("%s %s", company[i].name, company[i].depart);
        }

        printf("This works!");
    }
}

int main()
{
    int countemployees = 0;
    int n = 1;
    
    while(n==1)
    {
        printf("1: add employee 2: print employee details 3: update employee info 4: quit => ");
        int input; scanf("%d", &input);

        switch(input)
        {
            case 1: company[countemployees++] = addEmployee();
            break;
            case 2: printEmployeeDetails(company, countemployees);
            break;
            case 3: updateEmployeeInfo(company, countemployees);
            break;
            case 4: n = 0;
            break;
        }
    }

    return 0;
}