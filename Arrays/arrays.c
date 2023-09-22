#include <stdio.h>

int main()
{
    double prices[] = {3.0, 4.25, 5.30, 6.5};

    printf("Size of the array in bytes: %d\n", sizeof(prices));

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("%.2lf\n", prices[i]);
    }
}