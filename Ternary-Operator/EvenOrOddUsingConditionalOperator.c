// Write a C program to check whether a number is even or odd using a conditional operator.

#include<stdio.h>
int main()
{
    int No = 0;

    printf("Enter the No : ");
    scanf("%d",&No);

    (No % 2 == 0) ? printf("Given Number is Even ") : printf("Given Number is Odd ");
    return 0;
}