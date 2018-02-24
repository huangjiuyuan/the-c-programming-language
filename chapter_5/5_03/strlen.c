#include <stdio.h>

main()
{
    int string_len(char *s);
    char array[100] = "array";
    char *ptr;
    ptr = array;

    printf("%d\n", string_len("hello, world"));
    printf("%d\n", string_len(array));
    printf("%d\n", string_len(ptr));
    printf("%d\n", string_len(array + 1));
    printf("%d\n", string_len(ptr + 1));
}

/* string_len: return length of string s */
int string_len(char *s)
{
    int n;

    for (n = 0; *s != '\0'; s++)
        n++;
    return n;
}
