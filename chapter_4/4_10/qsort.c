#include <stdio.h>

main()
{
    int v[10] = {42, 3, -9, 15, -81, 23, 108, 90, 23, 10};
    void qsort(int v[], int left, int right);

    qsort(v, 0, 9);
    for (int i = 0; i < 10; ++i)
    {
        printf("%d", v[i]);
        switch (i)
        {
        case 9:
            printf("\n");
            break;
        default:
            printf(" ");
        }
    }
}

/* qsort: sort v[left]...v[right] into increasing order */
void qsort(int v[], int left, int right)
{
    int i, last;
    void swap(int v[], int i, int j);

    if (left >= right)                  /* do nothing if array contains */
        return;                         /* fewer than two elements */
    swap(v, left, (left + right) / 2);  /* move partition elem */
    last = left;                        /* to v[0] */
    for (i = left + 1; i <= right; i++) /* partition */
        if (v[i] < v[left])
            swap(v, ++last, i);
    swap(v, left, last); /* restore partition elem */
    qsort(v, left, last - 1);
    qsort(v, last + 1, right);
}

/* swap: interchange v[i] and v[j] */
void swap(int v[], int i, int j)
{
    int temp;

    temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}
