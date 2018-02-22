#include <stdio.h>
#include <string.h>

main()
{
    int x = 1;
    char squota = '\'';
    long day = 1000L * 60L * 60L * 24L;
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char s[] = "hello";
    printf("string: %s, length: %lu\n", s, strlen(s));
}
