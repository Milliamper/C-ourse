#include <stdio.h>

int status_flag = 0;

ISR(void)
{
    status_flag = 1;
}

int main()
{
    while (status_flag != 0)
    {
        Send(NO_ERROR);
    }
    return 0;
}
