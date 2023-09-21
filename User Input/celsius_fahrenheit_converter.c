
#include <stdio.h>
#include <string.h>

int main()
{

    char unit;
    float temp, result;

    printf("Is the temperature (C)elsius or (F)ahrenheit?: ");
    scanf("%s", &unit);

    unit = tolower(unit);

    switch (unit)
    {
    case 'c':
        printf("\nEnter the temp in celsius: ");
        scanf("%f", &temp);
        result = temp * 9 / 5 + 32;
        printf("\n%.1f Celsius in Fahrenheit is: %.1f\n", temp, result);
        break;
    case 'f':
        printf("\nEnter the temp in fahrenheit: ");
        scanf("%f", &temp);
        result = ((temp - 32) * 5) / 9;
        printf("\n%.1f Celsius in Fahrenheit is: %.1f\n", temp, result);
        break;
    default:
        printf("You provided a wrong character!\n"); break;
    }
}