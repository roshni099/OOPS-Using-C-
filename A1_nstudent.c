#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char name[20];
    int roll;
    float marks[5], total, per;
} std;
int main()
{
    std rosh[100], z;
    int i, n, j;
    int x;
    float l, u;

    printf("\nEnter the no. of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n\nNAME : ");
        scanf("%s", rosh[i].name);
        printf("\nRoll number = ");
        scanf("%d", &rosh[i].roll);
        printf("\nTotal marks = 100\n");
        for (j = 0; j < 5; j++)
        {
            printf("\nEnter marks of %d subject = ", j + 1);
            scanf("%f", &rosh[i].marks[j]);
        }
        printf("\n");
        rosh[i].total = 0;

        for (j = 0; j < 5; j++)
        {
            printf("\nMarks[%d] = %f\n", j + 1, rosh[i].marks[j]);
            rosh[i].total += rosh[i].marks[j];
        }
        rosh[i].per = (rosh[i].total / 500.0) * 100;
        printf("\nTotal marks = %.2f\n", rosh[i].total);
        printf("\nPercentage = %f\n", rosh[i].per);
    }
    printf("\n\nEnter roll no. to see the details : ");
    scanf("%d", &x);

    for (i = 0; i < n; i++)
    {
        if (x == i + 1)
        {
            printf("\nName = %s\nRoll = %d\n", rosh[i].name, rosh[i].roll);
            for (j = 0; j < 5; j++)
            {
                printf("Marks[%d] = %f\n", j + 1, rosh[i].marks[j]);
            }

            printf("Total marks = %.2f", rosh[i].total);
            printf("\nPercentage = %.2f", rosh[i].per);
        }
    }

    printf("\n\nEnter percentage range: \n");
    printf("Lower limit: ");
    scanf("%f", &l);
    printf("\nUpper limit: ");
    scanf("%f", &u);
    for (i = 0; i < n; i++)
    {
        if (rosh[i].per >= l && rosh[i].per <= u)
        {
            printf("\nName: %s", rosh[i].name);
            printf("\nRoll no: %d", rosh[i].roll);
            for (j = 0; j < 5; j++)
            {
                printf("\nMarks[%d] = %.2f", j + 1, rosh[i].marks[j]);
            }
            printf("\nTotal marks: %.2f", rosh[i].total);
            printf("\nPercentage = %.2f", rosh[i].per);
        }
    }
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (rosh[j].total > rosh[j + 1].total)
            {
                z = rosh[j + 1];
                rosh[j + 1] = rosh[j];
                rosh[j] = z;
            }
        }
    }

    printf("\n\n\nSorted student list: ");
    for (i = 0; i < n; i++)
    {
        printf("\n\nName = %s", rosh[i].name);
        printf("\nRoll number: %d", rosh[i].roll);
        printf("\nTotal marks: %.2f", rosh[i].total);
    }

    return 0;
}