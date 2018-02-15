#include <stdio.h>

void squeeze(char s[], int c);
void concat(char s[], char t[]);
void squeeze_str(char s[], char t[]);
int any(char s[], char t[]);

main()
{
    int c = 'e';
    char s1[100] = "hello, it's me";
    squeeze(s1, c);
    printf("%s\n", s1);

    char s2[100] = "ABC";
    char s3[100] = "DEF";
    concat(s2, s3);
    printf("%s\n", s2);

    char s4[100] = "hello from the other side";
    char s5[100] = "lo";
    squeeze_str(s4, s5);
    printf("%s\n", s4);

    char s6[100] = "hello";
    char s7[100] = "lo";
    printf("%d\n", any(s6, s7));
}

/* squeeze: delete all c from s */
void squeeze(char s[], int c)
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

/* concat: concatenate t to end of s; s must be big enough */
void concat(char s[], char t[])
{
    int i, j;

    i = j = 0;
    while (s[i] != '\0') /* find end of s */
        i++;
    while ((s[i++] = t[j++]) != '\0') /* copy t */
        ;
}

void squeeze_str(char s[], char t[])
{
    int i, j;

    for (i = j = 0; s[i] != '\0'; i++)
    {
        int match = 0;

        for (int k = 0; t[k] != '\0'; k++)
            if (s[i] == t[k])
            {
                match = 1;
                break;
            }
        if (!match)
            s[j++] = s[i];
    }
    s[j] = '\0';
}

int any(char s[], char t[])
{
    int i;

    for (i = 0; s[i] != '\0'; i++)
        for (int j = 0; t[j] != '\0'; j++)
            if (s[i] == t[j])
                return i;
    return -1;
}
