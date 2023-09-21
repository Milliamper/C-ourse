#include <stdio.h>

int main()
{

    int grade;

    printf("Érdemjegy: \n");
    scanf("%d", &grade);

    /*

        if (grade == 1)
        {
            printf("Elégtelen\n");
        }
        else if (grade == 2)
        {
            printf("Elégséges\n");
        }
        else if (grade == 3)
        {
            printf("Közepes\n");
        }
        else if (grade == 4)4

        {
            printf("Jó\n");
        }
        else
        {
            printf("Kiváló\n");
        }
    */
    switch (grade)
    {
    case 1:
        printf("Elégtelen\n");
        break;
    case 2:
        printf("Elégséges\n");
        break;
    case 3:
        printf("Közepes\n");
        break;
    case 4:
        printf("Jó\n");
        break;
    case 5:
        printf("Kiváló\n");
        break;

    default:
        printf("Nem 1 és 5 között adtál meg számot!\n");
        break;
    }
}