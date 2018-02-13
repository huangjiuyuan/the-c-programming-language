#include <stdio.h>
#define MAXLINE 1000

int get_line_length(void);
void copy_line(void);

/* define extern variables here */
int max;
char longest[MAXLINE];
char line[MAXLINE];

/* print longest input line */
main()
{
    int len;
    extern int max;
    extern char longest[];

    max = 0;
    while ((len = get_line_length()) > 0)
        if (len > max)
        {
            max = len;
            copy_line();
        }
    if (max > 0) /* there was a line */
        printf("%s", longest);
    return 0;
}

int get_line_length(void)
{
    int c, i;
    extern char line[];

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        line[i] = c;
    if (c == '\n')
    {
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}

void copy_line(void)
{
    int i;
    extern char line[], longest[];

    i = 0;
    while ((longest[i] = line[i]) != '\0')
        ++i;
}
