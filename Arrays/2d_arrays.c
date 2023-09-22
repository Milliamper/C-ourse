#include <stdio.h>

int main()
{
    int num[][3] = {{1, 2, 3}, {4, 5, 6}};


    int rows = sizeof(num) / sizeof(num[0]);
    int columns = sizeof(num[0]) / sizeof(num[0][0]);

    printf("Rows: %d\n", rows);
    printf("Columns: %d\n", columns);


    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; i < 3; j++)
        {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}