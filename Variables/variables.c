#include <stdio.h>
#include <stdbool.h> // ezzel lehet logikai változókat használni

int main() {
    int age = 24; // integer
    float grade = 4.6; // floating point number
    char single_character = 'a';
    char name[] = "Márton";

    printf("I'm %d age years old.\n", age);
    printf("Name: %s\n", name);
    printf("Single character: %c\n", single_character);

    float pi = 3.141592; //      4 bytes (32 bits of precision) - 6-7 digits
    double d = 3.14159243453; // 8 bytes (64 bits of precision) - 15-16 digits

    bool e = false; // 1 bit %d (0-t vagy 1-et jelenít meg)

    char f = 100; //            1 byte (-128 to 127) - %d or %c
    unsigned char g = 255; //   1 byte (0 to 255)    - %d or %c
    printf("Meglenítés számként: %d\n", f);
    printf("Megjelenítés karakterként ASCII tábla szerint: %c\n", f);

    // a short-ot nem muszáj kiírni
    // a signed kulcsszót sem szokás explicite kiírni
    signed short int h = 32764; // 2 bytes (-32.768 to 32.767) %d
    unsigned short int i = 65535; // 2 bytes (0 to 65.535) %d

    // ezek eleve long-ok, csak ezt sem szokás explicite kiírni
    int j = 2147483647; // 4 bytes (-2.147.483.648 to 2.147.483.647) %d
    unsigned int k = 4294967295; // 4 bytes (0 to 4.294.967.295) %u

    long long int l = 9000000000000000000; // 8 bytes (-9*10^18 to 9*10^18) % lld
    unsigned long long int m = 18000000000000000000U; // 8 bítes (18*10^18) % llu
    printf("%lld\n", l);
    printf("%llu\n", m);





    return 0;
}