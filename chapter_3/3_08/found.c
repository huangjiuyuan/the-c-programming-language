#include <stdio.h>
#include <string.h>

void found(char s[], char t[]);

main()
{
    char s1[100] = "a";
    char s2[100] = "b";
    found(s1, s2);

    char s3[100] = "hello";
    char s4[100] = "world";
    found(s3, s4);
}

void found(char s[], char t[])
{
    int i, j, n, m;

    n = strlen(s);
    m = strlen(t);
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            if (s[i] == t[j])
                goto found;
    printf("not found\n");
    return;

found:
    printf("char \"%c\" found\n", s[i]);
}
