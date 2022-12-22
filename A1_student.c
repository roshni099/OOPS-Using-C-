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
    std rosh;
    int i;
    rosh.total = 0;
    printf("\nEnter your details below: \n");

    printf("\nNAME : ");
    scanf("%s", rosh.name);
    printf("\nRoll number = ");
    scanf("%d", &rosh.roll);
    for (i = 0; i < 5; i++)
    {
        printf("\nEnter marks of %d subject = ", i+1);
        scanf("%f", &rosh.marks[i]);
    }

    printf("\nYour details :\n");
    printf("\nName: %s", rosh.name);
    printf("\nRoll number: %d", rosh.roll);
    printf("\nTotal marks = 100\n");
    for (i = 0; i < 5; i++)
    {
        printf("Marks[%d] = %.2f\n", i+1, rosh.marks[i]);
        rosh.total += rosh.marks[i];
    }


    return 0;
}