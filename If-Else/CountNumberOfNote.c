// Write a C program to count total number of notes in given amount.

#include<stdio.h>

int main()
{
    int amount = 0;
    int note = 0;

    printf("\n Enter The Amount : ");
    scanf("%d",&amount);

    if(amount>0)
    {
        if(amount >= 500)
        {
            note = (amount / 500);
            printf("\n Number of 500 Note is %d",note);
            amount = amount - (note * 500);
        }
        if(amount >= 200)
        {
            note = (amount / 200);
            printf("\n Number of 200 Note is %d ",note);
            amount = amount - (note * 200);
        }
        if(amount >= 100)
        {
            note = (amount / 100);
            printf("\n Number of 100 Note is %d ",note);
            amount = amount - (note * 100);
        }
        if(amount >= 50)
        {
            note = (amount / 50);
            printf("\n Number of 50 Note is %d ",note);
            amount = amount - (note * 50);
        }
        if(amount >= 20)
        {
            note = (amount / 20);
            printf("\n Number of 20 Note is %d ",note);
            amount = amount - (note * 20);
        }
        if(amount >= 10)
        {
            note = (amount / 10);
            printf("\n Number of 10 Note is %d ",note);
            amount = amount - (note * 10);
        }
        if(amount >= 5)
        {
            note = (amount / 5);
            printf("\n Number of 5 Note is %d ",note);
            amount = amount - (note * 5);
        }
        if(amount >= 2)
        {
            note = (amount / 2);
            printf("\n Number of 2 Note is %d ",note);
            amount = amount - (note * 2);
        }
        if(amount >= 1)
        {
            note = (amount / 1);
            printf("\n Number of 1 Note is %d ",note);
            amount = amount - (note * 1);
        }
    }
    else
    {
        printf("\n Invalid Amount...!!!");
    }
    
    return 0;
}