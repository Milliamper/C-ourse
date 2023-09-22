#include <stdio.h>
#include <string.h>

struct Student
{
    char name[20];
    float avg;
};

int main()
{
    struct Student student1 = {"Tim", 3.1};
    struct Student student2 = {"Tom", 4.1};
    struct Student student3 = {"Bob", 2.9};
    struct Student student4 = {"Joe", 4.4};

    struct Student students[] = {student1, student2, student3, student4};

    for (int i = 0; i < sizeof(students) / sizeof(students[0]); i++)
    {
        printf("%s\n", students[i].name);
    }
}