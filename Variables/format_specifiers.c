#include <stdio.h>

int main () {

    // %.1 = decimal precision
    // %1 = minimum field with
    // %- = left align

    float item1 = 5.75;
    float item2 = 10.00;
    float item3 = 10.99;

    printf("Item1: %8.2f€\n", item1);
    printf("Item2: %8.2f€\n", item2);
    printf("Item3: %8.2f€\n", item3);

}