#include <stdio.h>
#include <string.h>

typedef struct {
    char name[20];
    char pswd[20];
    int id;
} User;

int main() {
    User user1 = {"Bob", "pswd1234", 1000};
    printf("%s\n", user1.name);
}