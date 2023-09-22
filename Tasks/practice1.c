#include <stdio.h>

/* Change the Absolute value of the integer 
stored at the following address location 0x8000 to a value 0xF0F0 */

int main() {
    int *pNum = (int*)0x8000;
    *pNum = 4;

    printf("%d", *pNum);
}