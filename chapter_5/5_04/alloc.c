#include <stdio.h>

#define ALLOCSIZE 10000 /* size of available space */

static char allocbuf[ALLOCSIZE]; /* storage for alloc */
static char *allocp = allocbuf;  /* next free position */
/* can be written as `static char *allocp = &allocbuf[0]` */

main()
{
    char *alloc(int n);
    void afree(char *p);

    printf("before alloc, allocp: %p\n", allocp);
    char *a1 = alloc(4);
    printf("after alloc a1, a1: %p, allocp: %p\n", a1, allocp);
    char *a2 = alloc(4);
    printf("after alloc a2, a2: %p, allocp: %p\n", a2, allocp);

    afree(a2);
    printf("after afree a1, allocp: %p\n", allocp);
    afree(a1);
    printf("after afree a2, allocp: %p\n", allocp);
}

char *alloc(int n) /* return pointer to n characters */
{
    if (allocbuf + ALLOCSIZE - allocp >= n) /* it fits */
    {
        allocp += n;
        return allocp - n; /* old p */
    }
    else /* not enough room */
        return 0;
}

void afree(char *p) /* free storage pointed to by p */
{
    if (p >= allocbuf && p < allocbuf + ALLOCSIZE)
        allocp = p;
}
