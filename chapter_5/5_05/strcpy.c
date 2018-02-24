#include <stdio.h>
#include <stdlib.h>

void strcpy_array(char *s, char *t);
void strcpy_ptr(char *s, char *t);

main()
{
    char amessage[] = "now is the time";
    char *pmessage = "now is the time";

    printf("amessage: %s\n", amessage);
    printf("pmessage: %s\n", pmessage);
    printf("*(amessage+1): %c\n", *(amessage + 1));
    printf("*(pmessage+1): %c\n", *(pmessage + 1));

    /* strings are stored in read-only memory; allocation on the heap is required */
    char *t = "hello";
    char *s1 = malloc(6);
    char *s2 = malloc(6);

    strcpy_array(s1, t);
    printf("s1: %s\n", s1);
    strcpy_ptr(s2, t);
    printf("s2: %s\n", s2);

    free(s1);
    free(s2);
}

/* strcpy_array: copy t to s; array subscript version */
void strcpy_array(char *s, char *t)
{
    int i;

    i = 0;
    while ((s[i] = t[i]) != '\0')
        i++;
}

/* strcpy_ptr: copy t to s; pointer version */
void strcpy_ptr(char *s, char *t)
{
    while ((*s++ = *t++))
        ;
}
