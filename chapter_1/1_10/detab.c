#include <stdio.h>
#define MAXLINE 1000
#define TABSTOP 4

void detab(char line[], int maxline, int tabstop);

main()
{
    char line[MAXLINE];

    detab(line, MAXLINE, TABSTOP);
    printf("%s", line);
}

void detab(char s[], int lim, int tabstop)
{
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF; ++i)
    {
        if (c == '\t')
        {
            for (int j = 0; j < tabstop; ++j)
                s[i + j] = ' ';
            i = i + tabstop - 1;
        }
        else
            s[i] = c;
    }
    s[i] = '\0';
}
