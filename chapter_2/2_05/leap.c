#include <stdio.h>

int leap(int year);

main()
{
    leap(2012);
    leap(2014);
}

int leap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("%d is a leap year\n", year);
        return 1;
    }
    else
    {
        printf("%d is not a leap year\n", year);
        return 0;
    }
}
