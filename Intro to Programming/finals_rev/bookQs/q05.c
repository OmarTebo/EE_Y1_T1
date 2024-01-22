// Check Whether the Entered Year is Leap Year or not.

#include <stdio.h>

char* Leap_year(int year)
{
    if ((year % 4) == 0)
        return "a Leap Year";
    else
        return "not a Leap Year";
}

int main()
{
    int year;

    printf("Enter a Year> ");
    scanf("%d", &year);

    printf("it is %s\n", Leap_year(year));
}
