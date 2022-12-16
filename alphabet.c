#include <stdio.h>
#include <conio.h>

int main()
{

    char lett;

    printf("enter the letter :");
    scanf("%c",&lett);

    if (lett == 'a' || lett == 'e' || lett == 'i' || lett == 'o' || lett == 'u')
    {
        printf("it is vowel");
    }
    else
    {
        printf("it is consonant");
    }
}