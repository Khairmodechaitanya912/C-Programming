//  Write a C program to input any alphabet and check whether it is vowel or consonant.

#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the Alphabet : ");
    scanf("%c",&ch);

    if((ch >= 'a')&&(ch <= 'z')||(ch >= 'A')&&(ch <= 'Z'))
    {
        if((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        {
            printf("Given Alphabet is Vowel.");
        }
        else
        {
            printf("Given Alphabet is Consonant.");
        }
    }
    else
    {
        printf("Given Character is Not Alphabet.");
    }

    return 0;
}