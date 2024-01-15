#include <stdio.h>

int square_sum(const int*values, size_t count);

int main()
{
    int nums[100] = {0},
        n,
        sum;
    size_t numlen = sizeof(nums)/sizeof(nums[0]);

    printf("Enter the amount of numbers to sum their squares> "); 
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("Enter Number #%d> ", i+1);
        scanf("%d", &nums[i]);
    }

    sum = square_sum(nums, numlen);

    printf("The sum of the squares = %d\n", sum);
}

int square_sum(const int*values, size_t count)
{
    int sum = 0;

    for (int i =0; i < (int)count; i++)
        sum += values[i] * values[i];

    return sum;
}
