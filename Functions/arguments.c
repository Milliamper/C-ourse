#include <stdio.h>

void greetings(char name[], int age) // paraméterek 
{
    printf("Hello %s, your age is %d\n", name, age);
}

int main()
{
    greetings("Márton", 24); //argumentumok
}