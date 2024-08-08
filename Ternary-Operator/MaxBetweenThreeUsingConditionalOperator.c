// Write a C program to find the maximum between three numbers using the conditional operator.

#include<stdio.h>
int main()
{
    int No1 = 0;
    int No2 = 0;
    int No3 = 0;
    
    printf("Enter The First No : ");
    scanf("%d",&No1);

    printf("Enter The Second No : ");
    scanf("%d",&No2);

    printf("Enter The Third No : ");
    scanf("%d",&No3);

    ((No1>No2)&&(No1>No3))? printf("Number First is Maximum.") : ((No2>No1)&&(No2>No3)) ? printf("Number Second is Maximum.") : ((No3>No1)&&(No3>No2)) ? printf("Number Third is Maximum.") : printf("Numbers are Equal.");
    return 0; 
}