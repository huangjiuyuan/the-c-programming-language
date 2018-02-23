#include <stdio.h>

main()
{
    int x = 1, y = 2, z[10];
    int *ip; /* ip is a pointer to int */
    ip = &x; /* ip now points to x */
    printf("x: %d, y: %d, *ip: %d\n", x, y, *ip);

    y = *ip; /* y is now 1 */
    printf("x: %d, y: %d, *ip: %d\n", x, y, *ip);

    *ip = 0; /* x is now 0 */
    printf("x: %d, y: %d, *ip: %d\n", x, y, *ip);

    ip = &z[0]; /* ip now points to z[0] */
    printf("x: %d, y: %d, *ip: %d\n", x, y, *ip);

    z[0] = 5;
    printf("x: %d, y: %d, *ip: %d\n", x, y, *ip);

    int *iq = ip;
    *iq = 10;
    printf("x: %d, y: %d, *ip: %d\n", x, y, *ip);
}
