#include <stdio.h>

void shellsort(int v[], int n);

main()
{
    int v[] = {20, 0, 6, 97, 15, 48, 2, 101, 89, 13};

    shellsort(v, 10);
    for (int i = 0; i < 10; i++)
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

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int v[], int n)
{
    int gap, i, j, temp;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
            {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}
