#include <stdio.h>

int main() {

    // i.	Constant integer
    int const number = 3;

    // ii.	Pointer to an integer constant
    const int *pNumber = &number;

    // iii.	Constant Pointer to an integer constant
    const int * const pNumber2 = &number;


    printf("Address of number: %p\n", &number);
    printf("Value of pNumber: %p\n", pNumber);
    printf("Value of number: %d\n", number);
    printf("Value at stored address: %d\n", *pNumber); // dereferencing

    printf("________\n");

    printf("Address of number: %p\n", &number);
    printf("Value of pNumber2: %p\n", pNumber2);
    printf("Value of number: %d\n", number);
    printf("Value at stored address: %d\n", *pNumber2); // dereferencing

}


