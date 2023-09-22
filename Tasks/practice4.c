#include <stdio.h>

// Write a pointer to a function that shows
// declaration and function call using function pointer

void greetings(char name[])
{
    printf("Hello %s!\n", name);
}

int main()
{
    // pointer to function greetings() 
    void (*pGreetings)(char[]) = &greetings;

    // Calling greetings() using pGreetings
    (*pGreetings)("Márton");
}