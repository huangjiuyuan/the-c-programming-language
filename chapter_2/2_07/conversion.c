#include <stdio.h>

int atoi(char s[]);
int lower(int c);
int htoi(char s[]);

main()
{
    printf("atoi: %d\n", atoi("256"));
    printf("lower: %d\n", lower('H'));

    printf("-1L < 1U: %d\n", -1L < 1U);
    printf("-1L > 1UL: %d\n", -1L > 1UL);
    printf("size of int: %lu\n", sizeof(int));
    printf("size of long: %lu\n", sizeof(long));

    int i = 128;
    char c = 1;
    c = i;
    i = c;
    printf("i: %d, c: %d\n", i, c);

    printf("htoi: %d\n", htoi("0X12"));
    printf("htoi: %d\n", htoi("0X7A2EC"));
}

/* atoi: convert s to integer */
int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

/* lower: convert c to lower case; ASCII only */
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}

int htoi(char s[])
{
    int i, n;

    if (s[0] != '0' || (s[1] != 'X' && s[1] != 'x'))
    {
        printf("invalid hex number\n");
        return 0;
    }

    for (i = 2;; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
            n = 16 * n + s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'e')
            n = 16 * n + s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'E')
            n = 16 * n + s[i] - 'A' + 10;
        else
            break;
    }
    return n;
}
