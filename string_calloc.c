#include <stdio.h>
#include <stdlib.h>

int main()
{
    int length;

    printf("Enter the length of the string: ");
    scanf("%d", &length);

    char *string = (char *)calloc(length + 1, sizeof(char));

    if (string == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (int i = 0; i < length && string[i] != '\0'; i++)
    {
        printf("%c", string[i]);
    }

    return 0;
}
