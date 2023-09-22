#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int c = 3;

int main () {

    srand(time(0));

    int rnd1 = rand() % 100 + 1;
    printf("%d\n", rnd1);

    printf("%d", c);

}