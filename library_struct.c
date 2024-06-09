#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    struct Book library[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for Book %d:\n", i + 1);

        printf("Title: ");
        scanf(" %s", library[i].title);

        printf("Author: ");
        scanf(" %s", library[i].author);
        printf("Price: ");
        scanf("%f", &library[i].price);

        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: %.2f\n", library[i].price);
    }

    printf("You entered the following books:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Price: %.2f\n", library[i].price);
    }

    return 0;
}
