// Write a C program to check whether a number is divisible by 5 and 11 or not.

#include<stdio.h>

int main()
{
    int No = 0;

    printf("Enter the Number : ");
    scanf("%d",&No);

    if((No % 5 == 0)&&(No % 11 == 0))
    {
        printf("Given Number is Divisible by 5 And 11.");
    }
    else
    {
        printf("Given Number is Not Divisible by 5 and 11.");
    }

    return 0;
}