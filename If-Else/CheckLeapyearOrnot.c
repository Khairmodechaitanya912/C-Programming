// Write a C program to check whether a year is a leap year or not.

#include<stdio.h>

int main()
{
    int year = 0;

    printf("Enter the Year : ");
    scanf("%d",&year);

    if(year%4 == 0)
    {
        printf("Given Year is Leap Year..!!");
    }
    else
    {
        printf("Given Year is Not Leap Year..!!");
    }
     return 0;
}