#include <stdlib.h>

int main() {
    // memory: an array of bytes within RAM (street)
    // memory block: a single unit (byte) within memory, used to hold value (house)
    // memory address: the address of where a memory block is locakted (house address)

    char a = "x";
    char b = "y";
    char c = "z";

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
}