#include <stdio.h>
#define MAXLINE 1000

main()
{
    int c, i;
    char s[MAXLINE];

    while (i < MAXLINE - 1)
    {
        c = getchar();
        if (c == '\n')
            break;
        if (c == EOF)
            break;
        s[i] = c;
        ++i;
    }
    printf("%s\n", s);
}
