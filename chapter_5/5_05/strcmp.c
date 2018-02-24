#include <stdio.h>

int strcmp_array(char *s, char *t);
int strcmp_ptr(char *s, char *t);

main()
{
    char *s1 = "abc";
    char *s2 = "abcde";

    printf("%d\n", strcmp_array(s1, s2));
    printf("%d\n", strcmp_ptr(s1, s2));
}

/* strcmp_array: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp_array(char *s, char *t)
{
    int i;

    for (i = 0; s[i] == t[i]; i++)
        if (s[i] == '\0')
            return 0;
    return s[i] - t[i];
}

/* strcmp_ptr: return <0 if s<t, 0 if s==t, >0 if s>t */
int strcmp_ptr(char *s, char *t)
{
    for (; *s == *t; s++, t++)
        if (*s == '\0')
            return 0;
    return *s - *t;
}
