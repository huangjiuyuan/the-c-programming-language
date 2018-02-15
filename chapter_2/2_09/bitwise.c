#include <stdio.h>

unsigned getbits(unsigned x, int p, int n);
unsigned setbits(unsigned x, int p, int n, unsigned y);
unsigned invert(unsigned x, int p, int n);
unsigned rightrot(unsigned x, int n);

main()
{
    /* 1234: 10011010010 */
    printf("%u\n", getbits(1234, 4, 3));
    /* 1222: 10011000110; 4321: 1000011100001 */
    printf("%u\n", setbits(1234, 4, 3, 4321));
    /* 1230: 10011001110 */
    printf("%u\n", invert(1234, 4, 3));
    /* 536870989: 100000000000000000000001001101 */
    printf("%u\n", rightrot(1234, 4));
}

/* getbits: get n bits from position p */
unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    return (x & ~(~(~0 << n) << (p + 1 - n))) | (y & ~(~0 << n)) << (p + 1 - n);
}

unsigned invert(unsigned x, int p, int n)
{
    return x ^ ~(~0 << n) << (p + 1 - n);
}

unsigned rightrot(unsigned x, int n)
{
    return (x >> n) | (x << (sizeof(unsigned) * 8 - n));
}
