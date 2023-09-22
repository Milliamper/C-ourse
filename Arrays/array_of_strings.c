#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Honda", "Volvo", "Opel"};
    strcpy(cars[0], "Peugeot");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
    {
        printf("%d. elem: %s\n", i + 1, cars[i]);
    }

    char x = 'x';
    char y = 'y';
    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("x: %c\n", x);
    printf("y: %c\n", y);
}