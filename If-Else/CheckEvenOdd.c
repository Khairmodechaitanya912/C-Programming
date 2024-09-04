// Write a C program to check whether a number is even or odd.

#include<stdio.h>

int main()
{
    int No = 0;

    printf("Enter the Number : ");
    scanf("%d",&No);

    if(No % 2 == 0)
    {
        printf("Given Number is Even.");
    }
    else
    {
        printf("Given Number is Odd.");
    }
    
    return 0;
}