#include <stdio.h>

#define max(a, b) ((a) > (b) ? (a) : (b))
#define square(x) (x) * (x)
#define dprint(expr) printf(#expr " = %g\n", expr)
#define paste(front, back) front##back
#define swap(t, x, y) \
    {                 \
        t tmp;        \
        tmp = x;      \
        x = y;        \
        y = tmp;      \
    }

main()
{
    int x = max(10, 50);
    printf("max: %d\n", x);

    int y = square(5);
    printf("square: %d\n", y);

    dprint(10.0 / 8.0); // expanded into printf("x/y = %g\n", x/y)

    int concat = 10;
    paste(con, cat);

    printf("before swap: %d, %d\n", x, y);
    swap(int, x, y);
    printf("after swap: %d, %d\n", x, y);
}
