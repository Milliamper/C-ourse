#include <stdio.h>

int main() {
    // pointer : reference that holds a memory address to another variable

    int age = 25;
    int *pAge = &age;

    printf("Address of age: %p\n", &age);
    printf("Value of pAge: %p\n", pAge);

    printf("Value of age: %d\n", age);
    printf("Value at stored address: %d\n", *pAge); // dereferencing

}