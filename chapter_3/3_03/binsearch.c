#include <stdio.h>

int binsearch(int x, int v[], int n);

main()
{
    int v[] = {2, 4, 5, 8, 12, 17, 23, 50, 84, 115};
    printf("%d\n", binsearch(8, v, 10));
    printf("%d\n", binsearch(50, v, 10));
    printf("%d\n", binsearch(0, v, 10));
}

/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
        else /* found match */
            return mid;
    }
    return -1; /* no match */
}
