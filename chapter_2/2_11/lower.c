#include <stdio.h>
#include <string.h>

int lower(int c);

main()
{
    int a = 10;
    int b = 20;
    printf("%d\n", (a > b) ? a : b);

    float f = 1.2;
    int i = 12;
    printf("%f\n", (i < 0) ? f : i);

    char s[100] = "hello, it's me";
    for (i = 0; i < strlen(s); i++)
        printf("%d%c", s[i], (i % 5 == 4 || i == strlen(s) - 1) ? '\n' : ' ');

    int c = 'X';
    printf("%d\n", lower(c));
}

int lower(int c)
{
    return c >= 'A' && c <= 'Z' ? c + 'a' - 'A' : c;
}
