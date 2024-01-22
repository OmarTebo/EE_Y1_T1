// Find the largest number among three numbers

#include <stdio.h>

int find_largest(int n1, int n2, int n3)
{
    if (n1 > n2 && n1 > n3)
        return n1;
    else if (n2 > n1 && n2 > n3)
        return n2;
    else if (n3 > n1 && n3 > n2)
        return n3;
}

int main()
{
    int n1,
        n2,
        n3;

    printf("Enter 3 numbers separated by space> ");
    scanf("%d %d %d", &n1, &n2, &n3);

    printf("%d is the largest\n", find_largest(n1, n2, n3));
}
