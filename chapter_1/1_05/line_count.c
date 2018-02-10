#include <stdio.h>

/* count lines in input */
main()
{
    int c, nl, nt, ns;

    nl = 0;
    nt = 0;
    ns = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if (c == '\t')
            ++nt;
        else if (c == ' ')
            ++ns;
    printf("%d %d %d\n", nl, nt, ns);
}
