#include <stdio.h>

struct book
{
    char title[20];
    char auth[20];
    float price;
    int pages;
};

int main()
{
    int n, x;
    struct book temp;
    printf("\nEnter the number of books for total entry: ");
    scanf("%d", &n);
    struct book b[n];
    printf("\nEnter details below: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\n%d ENTRY: ", i + 1);
        printf("\nTitle: ");
        scanf("%s", b[i].title);
        printf("\nAuthor: ");
        scanf("%s", b[i].auth);
        printf("\nPrice: ");
        scanf("%f", &b[i].price);
        printf("\nTotal pages: ");
        scanf("%d", &b[i].pages);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (b[j].price > b[j + 1].price)
            {
                temp = b[j + 1];
                b[j + 1] = b[j];
                b[j] = temp;
            }
        }
    }



    printf("\nDetails of book having least price among all: \n");
    printf("\nTitle: %s", b[0].title);
    printf("\nAuthor: %s", b[0].auth);
    printf("\nPrice: %.2f", b[0].price);
    printf("\nPages: %d", b[0].pages);
    return 0;
}