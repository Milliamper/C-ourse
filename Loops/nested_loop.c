#include <stdio.h>

int main()
{

    int rows, columns;
    char symbol;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    scanf("%c"); // az input bufferben maradt egy \n, ezt így ignorálom

    printf("Enter a symbol: ");
    scanf("%c", &symbol);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}