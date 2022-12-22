#include <stdio.h>

typedef struct employee
{
    char name[20];
    int id;
    int age;
    double salary;
} std;

double salary(double s)
{
    double da, hra, t;
    da = (0.80) * s;
    hra = (0.10) * s;
    t = da + hra + s;
    printf("\nGross Salary: %.2lf\n", t);
}

int main()
{
    int i, n;
    printf("\nEnter the number of employees: ");
    scanf("%d", &n);
    std e[n], *emp;

    printf("\nEnter your details\n");
    for (i = 0; i < n; i++)
    {
        printf("\n%dst Employee: ", i + 1);
        printf("\nName: ");
        scanf("%s", e[i].name);
        printf("\nID: ");
        scanf("%d", &e[i].id);
        printf("\nAge: ");
        scanf("%d", &e[i].age);
        printf("\nBasic Salary: ");
        scanf("%lf", &e[i].salary);
    }

    printf("\n--------------------ALL EMPLOYEES DETAILS--------------------\n");
    for (i = 0; i < n; i++)
    {
        emp = &e[i];
        printf("\n%d Employee: ", i + 1);
        printf("\nName: %s", emp->name);
        printf("\nID: %d", emp->id);
        printf("\nAge: %d", emp->age);
        printf("\nBasic salary: %.2lf", emp->salary);
        salary(emp->salary);
    }
    printf("\n");
    return 0;
}