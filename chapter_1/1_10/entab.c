#include <stdio.h>
#define MAXLINE 1000
#define TABSTOP 4

void entab(char line[], int maxline, int tabstop);

main()
{
    char line[MAXLINE];

    entab(line, MAXLINE, TABSTOP);
    printf("%s", line);
}

void entab(char s[], int lim, int tabstop)
{
    int c, i, tab, space, flag;

    while (i < lim - 1 && (c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            flag = 1;
            ++space;
            if (space == tabstop)
            {
                ++tab;
                space = 0;
            }
        }
        else
        {
            if (flag == 1 && (tab > 0 || space > 0))
            {
                while (tab > 0)
                {
                    s[i] = '\t';
                    --tab;
                    ++i;
                }
                while (space > 0)
                {
                    s[i] = ' ';
                    --space;
                    ++i;
                }
                flag = 0;
            }
            s[i] = c;
            ++i;
        }
    }
    s[i] = '\0';
}
