// Write a C program to find the maximum between two numbers using the conditional operator.

#include<stdio.h>
int main()
{
    int No1 = 0;
    int No2 = 0;
    
    printf("Enter The First No : ");
    scanf("%d",&No1);

    printf("Enter The Second No : ");
    scanf("%d",&No2);

    (No1>No2)? printf("Number First is Maximum.") : printf("Number Second is Maximum.");
    return 0; 
}