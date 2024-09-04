//   Write a C program to check whether a number is negative, positive or zero.

#include<stdio.h>

int main()
{
    int No = 0;

    printf("Enter the Number : ");
    scanf("%d",&No);

    if(No > 0)
    {
        printf("Given Number is Positive.");
    }
    else if(No < 0)
    {
        printf("Given Number is Negative.");
    }
    else
    {
        printf("Given number is Zero.");
    }
    
    return 0;
}