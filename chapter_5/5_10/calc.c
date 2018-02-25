#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h> /* for atof() */

#define NUMBER '0' /* signal that a number was found */
#define MAXVAL 100 /* maximum depth of val stack */

void push(double);
double pop(void);

int sp = 0;         /* next free stack position */
double val[MAXVAL]; /* value stack */

/* reverse Polish calculator */
main(int argc, char *argv[])
{
    int type, c;
    double op2;

    while (--argc > 0)
    {
        if (!isdigit(c = **++argv) && strlen(*argv) == 1)
            type = c;
        else
            type = NUMBER;

        switch (type)
        {
        case NUMBER:
            push(atof(*argv));
            break;
        case '+':
            push(pop() + pop());
            break;
        case 'x':
            push(pop() * pop());
            break;
        case '-':
            op2 = pop();
            push(pop() - op2);
            break;
        case '/':
            op2 = pop();
            if (op2 != 0.0)
                push(pop() / op2);
            else
                printf("error: zero divisor\n");
            break;
        default:
            printf("error: unknown command %s\n", *argv);
            break;
        }
    }
    printf("%.8g\n", pop());
    return 0;
}

/* push: push f onto value stack */
void push(double f)
{
    if (sp < MAXVAL)
        val[sp++] = f;
    else
        printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void)
{
    if (sp > 0)
        return val[--sp];
    else
    {
        printf("error: stack empty\n");
        return 0.0;
    }
}
