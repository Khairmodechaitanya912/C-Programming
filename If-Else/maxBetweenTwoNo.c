// Write a C program to find the maximum between two numbers.

#include<stdio.h>
int main(){
     int No1 = 0;
     int No2 = 0;
    
    printf("Enter No1 : ");
    scanf("%d",&No1);
    
    printf("Enter No2 : ");
    scanf("%d",&No2);
    
    if(No1==No2)
    {
      printf("Both Numbers Are Equal...!!!");
    }
    else if(No1>No2)
    {
      printf("Maximum No is %d",No1);
    }
    else if(No2>No1)
    {
      printf("Maximum No is %d",No2);
    }
    else
    {
      printf("Please Enter Valid No...!!!");
    }
    
    return 0;    
}