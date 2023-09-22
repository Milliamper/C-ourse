#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    srand(time(0));

    int rnd1 = rand() % 100 + 1;
    printf("%d\n", rnd1);

}