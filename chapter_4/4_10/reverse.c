#include <stdio.h>

void reverse(char s[], int left, int right);
void swap(char s[], int i, int j);

main()
{
    char s[] = "hello";

    reverse(s, 0, 4);
    printf("%s\n", s);
}

void reverse(char s[], int left, int right)
{
    if (right - left > 1)
        reverse(s, left + 1, right - 1);
    swap(s, left, right);
}

void swap(char s[], int i, int j)
{
    int temp;

    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}
