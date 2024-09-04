// Write a C program to input month number and print number of days in that month.

#include<stdio.h>

int main()
{
     int No = 0;

    printf("Enter the Month Number : ");
    scanf("%d",&No);

    if(No <= 12)
    {
        if(No == 1)
        {
            printf("The Number of Days in January is 31..!!");
        }
        else if(No == 2)
        {
            printf("The Number of Days in February is 28 OR 29..!!");
        }
        else if(No == 3)
        {
            printf("The Number of Days in March is 31..!!");
        }
        else if(No == 4)
        {
            printf("The Number of Days in April is 30..!!");
        }
        else if(No == 5)
        {
            printf("The Number of Days in May is 31..!!");
        }
        else if(No == 6)
        {
            printf("The Number of Days in June is 30..!!");
        }
        else if(No == 7)
        {
            printf("The Number of Days in July is 31..!!");
        }
        else if(No == 8)
        {
            printf("The Number of Days in August is 31..!!");
        }
        else if(No == 9)
        {
            printf("The Number of Days in September is 30..!!");
        }
        else if(No == 10)
        {
            printf("The Number of Days in October is 31..!!");
        }
        else if(No == 11)
        {
            printf("The Number of Days in November is 30..!!");
        }
        else if(No == 12)
        {
            printf("The Number of Days in December is 31..!!");
        }
    }
    else
    {
        printf("Invalid Month Number..!!");
    }
    
    return 0;
}