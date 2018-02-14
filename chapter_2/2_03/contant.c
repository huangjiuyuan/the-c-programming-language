#include <stdio.h>

#define FLOAT 10.0F
#define LONG 10L
#define UNSIGNED_LONG_OCT 031UL
#define UNSIGNED_LONG_HEX 0XFUL
#define VTAB_OCT '\013'
#define BELL_OCT '\007'
#define VTAB_HEX '\xb'
#define BELL_HEX '\x7'
#define STRING "I am a string"

enum escapes
{
    BELL = '\a',
    BACKSPACE = '\b',
    TAB = '\t',
    NEWLINE = '\n',
    VTAB = '\v',
    RETURN = '\r'
};

enum months
{
    JAN = 1,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};

int string_len(char s[]);

main()
{
    printf("float: %f\n", FLOAT);
    printf("long: %ld\n", LONG);
    printf("unsigned long oct: %lo\n", UNSIGNED_LONG_OCT);
    printf("unsigned long hex: %lx\n", UNSIGNED_LONG_HEX);
    printf("vertical tab oct: %d\n", VTAB_OCT);
    printf("bell character oct: %d\n", BELL_OCT);
    printf("vertical tab hex: %d\n", VTAB_HEX);
    printf("bell character hex: %d\n", BELL_HEX);
    printf("string: %s\n", STRING);
    printf("string len: %d\n", string_len(STRING));
    printf("escapes: %d, %d, %d, %d, %d, %d\n",
           BELL, BACKSPACE, TAB, NEWLINE, VTAB, RETURN);
    printf("months: %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d, %d\n",
           JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC);
}

/* string_len: return length of s */
int string_len(char s[])
{
    int i;

    while (s[i] != '\0')
        ++i;
    return i;
}
