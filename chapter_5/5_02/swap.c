#include <stdio.h>

main()
{
    int a = 10;
    int b = 20;
    void swap(int *px, int *py);

    printf("before swap: %d, %d\n", a, b);
    swap(&a, &b);
    printf("after swap: %d, %d\n", a, b);
}

void swap(int *px, int *py) /* interchange *px and *py */
{
    int temp;

    temp = *px;
    *px = *py;
    *py = temp;
}
