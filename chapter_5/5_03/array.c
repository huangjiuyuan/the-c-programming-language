#include <stdio.h>

main()
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *pa;

    pa = &a[0]; // can be written as `pa = a`
    int x = *pa;
    printf("x: %d\n", x);
    printf("pa: %d\n", *pa);
    printf("*(pa+1): %d\n", *(pa + 1));
    printf("*(a+1): %d\n", *(a + 1));
}
