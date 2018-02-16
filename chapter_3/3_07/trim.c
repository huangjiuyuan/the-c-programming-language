#include <stdio.h>
#include <string.h>

int trim(char s[]);
void print_positive(int s[], int n);

main()
{
    char s1[100] = "s1: hello  ";
    char s2[100] = "s2: hello\n";
    char s3[100] = "s3: hello\t";

    printf("%s\n", s1);
    printf("%s\n", s2);
    printf("%s\n", s3);

    int v[] = {10, -4, -6, 3, 65, -90, 22, 11, 0, -57};
    print_positive(v, 10);
}

/* trim: remove trailing blanks, tabs, newlines */
int trim(char s[])
{
    int n;

    for (n = strlen(s) - 1; n >= 0; n--)
        if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
            break;
    s[n + 1] = '\0';
    return n;
}

void print_positive(int s[], int n)
{
    int i;

    for (i = 0; i < n; i++)
    {
        if (s[i] <= 0)
            continue;
        else
            printf("%d", s[i]);
        if (i != n - 1)
            printf(" ");
    }
    printf("\n");
}
