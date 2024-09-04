// write  a C program to input week number and print week day.

#include<stdio.h>

int main()
{
    int No = 0;

    printf("Enter the Week Day Number : ");
    scanf("%d",&No);

    if(No <= 7)
    {
        if(No == 1)
        {
            printf("The Day is Monday..!!");
        }
        else if(No == 2)
        {
            printf("The Day is Tuesday..!!");
        }
        else if(No == 3)
        {
            printf("The Day is Wednesday..!!");
        }
        else if(No == 4)
        {
            printf("The Day is Thursday..!!");
        }
        else if(No == 5)
        {
            printf("The Day is Friday..!!");
        }
        else if(No == 6)
        {
            printf("The Day is Saturday..!!");
        }
        else if(No == 7)
        {
            printf("The Day is Sunday..!!");
        }
    }
    else
    {
        printf("Invalid Week Day Number..!!");
    }
    
    return 0;
}