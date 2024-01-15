#include <stdio.h>

int main()
{
    int i,
        j,
        temp;
    
    int a[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};
    size_t alen= sizeof(a)/sizeof(a[0]);


    printf("Unsorted array: ");
    for (int k = 0; k < alen; k++)
    {
        printf("%4d", a[k]);
    }
    printf("\n");

    for (i = 0; i < alen; i++)
    {
        for (j = i+1; j < alen; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted array: \n");

    for (i = 0; i < alen; i++)
    {
        printf("%4d\n", a[i]);
    }
}

