#include <stdio.h>

main()
{
    int string_len(char *s);

    printf("%d\n", string_len("hello, world"));
}

/* string_len: return length of string s */
int string_len(char *s)
{
    char *p = s;

    while (*p != '\0')
        p++;
    return p - s;
}
