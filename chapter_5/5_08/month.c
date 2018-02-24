#include <stdio.h>

main()
{
    char *month_name(int n);

    printf("%s\n", month_name(0));
    printf("%s\n", month_name(1));
    printf("%s\n", month_name(12));
}

/* month_name: return name of nth-month */
char *month_name(int n)
{
    static char *name[] = {
        "Illegal month",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December",
    };

    return (n < 0 || n > 12) ? name[0] : name[n];
}
