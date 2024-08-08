// Write a C program to check whether year is leap year or not using a conditional operator.

#include<stdio.h>
int main()
{
    int Year = 0;

    printf("Enter the Year : ");
    scanf("%d",&Year);

    (Year % 4 == 0) ? printf(" Year is Leap ") : printf(" Year is not Leap ");
    return 0;
}