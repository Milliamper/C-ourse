#include <stdio.h>

int main() {

    int x,y;
    char string[24]; // bytes

    printf("\nÍrj valamit: ");
    //scanf("\n%s", &string); csak az első szóközik olvas
    fgets(string, 25, stdin);
    printf("\n%s", string);

    printf("\nFirst number: ");
    scanf("%d", &x);
    printf("\nSecond number: \n");
    scanf("%d", &y);
    printf("\nSum: %d\n", x+y);
}