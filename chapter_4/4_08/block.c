#include <stdio.h>

void fun();

int x = 5;

main()
{
    fun();
}

void fun()
{
    int x;

    x = 100;
    printf("%d\n", x);
}
