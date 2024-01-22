// Check whether a character is a vowel or consonant

#include <stdio.h>

char* vowel_consonant(char c)
{
    if (c == 'y' ||c == 'a' ||c == 'e' ||c == 'i' ||c == 'u' ||c == 'o')
        return "vowel";
    else
        return "consonant";
}

int main()
{
    char c;
    printf("Enter a character> ");
    scanf("%c", &c);

    printf("This letter is %s\n", vowel_consonant(c));
}
