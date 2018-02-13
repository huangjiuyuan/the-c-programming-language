#include <stdio.h>
#include <limits.h>
#include <float.h>
#define UNSIGNED_MIN 0

int power(int base, int n);

main()
{
    /* print the values from the header file */
    printf("unsigned char min:  %20u\n", UNSIGNED_MIN);
    printf("unsigned char max:  %20u\n", UCHAR_MAX);
    printf("signed char min:    %20d\n", SCHAR_MIN);
    printf("signed char max:    %20d\n", SCHAR_MAX);

    printf("unsigned short min: %20u\n", UNSIGNED_MIN);
    printf("unsigned short max: %20u\n", USHRT_MAX);
    printf("signed short min:   %20d\n", SHRT_MIN);
    printf("signed short max:   %20d\n", SHRT_MAX);

    printf("unsigned int min:   %20u\n", UNSIGNED_MIN);
    printf("unsigned int max:   %20u\n", UINT_MAX);
    printf("signed int min:     %20d\n", INT_MIN);
    printf("signed int max:     %20d\n", INT_MAX);

    printf("unsigned long min:  %20u\n", UNSIGNED_MIN);
    printf("unsigned long max:  %20lu\n", ULONG_MAX);
    printf("signed long min:    %20ld\n", LONG_MIN);
    printf("signed long max:    %20ld\n", LONG_MAX);

    /* print the values via computation */
    printf("unsigned char min:  %20u\n", UNSIGNED_MIN);
    printf("unsigned char max:  %20u\n", power(2, (sizeof(char) * 8)) - 1);
    printf("signed char min:    %20d\n", -1 * power(2, ((sizeof(char) * 8) - 1)));
    printf("signed char max:    %20d\n", power(2, ((sizeof(char) * 8) - 1)) - 1);

    printf("unsigned short min: %20u\n", UNSIGNED_MIN);
    printf("unsigned short max: %20u\n", power(2, (sizeof(short) * 8)) - 1);
    printf("signed short min:   %20d\n", -1 * power(2, ((sizeof(short) * 8) - 1)));
    printf("signed short max:   %20d\n", power(2, ((sizeof(short) * 8) - 1)) - 1);

    printf("unsigned int min:   %20u\n", UNSIGNED_MIN);
    printf("unsigned int max:   %20u\n", power(2, (sizeof(int) * 8)) - 1);
    printf("signed int min:     %20d\n", -1 * power(2, ((sizeof(int) * 8) - 1)));
    printf("signed int max:     %20d\n", power(2, ((sizeof(int) * 8) - 1)) - 1);

    printf("unsigned long min:  %20u\n", UNSIGNED_MIN);
    printf("unsigned long max:  %20lu\n", (long)power(2, (sizeof(long) * 8)) - 1);
    printf("signed long min:    %20ld\n", LONG_MIN);
    printf("signed long max:    %20ld\n", LONG_MAX);
}

int power(int base, int n)
{
    int p;

    for (p = 1; n > 0; --n)
        p = p * base;
    return p;
}
