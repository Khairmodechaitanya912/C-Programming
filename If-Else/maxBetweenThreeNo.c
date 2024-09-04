//  Write a C program to find a maximum between three numbers.

#include<stdio.h>
int main() {
     int No1 = 0;
     int No2 = 0;
     int No3 = 0;
    
    printf("Enter No1 : ");
    scanf("%d",&No1);
    
    printf("Enter No2 : ");
    scanf("%d",&No2);
    
    printf("Enter No3 : ");
    scanf("%d",&No3);
    
    if((No1==No2)&&(No2==No3)&&(No1==No3))
    {
      printf("Numbers Are Equal...!!!");
    }
    else if((No1>No2) || (No1>No3) )
    {
      printf("Maximum No is %d",No1);
    }
    else if((No2>No1)&&(No2>No3))
    {
      printf("Maximum No is %d",No2);
    }
    else if((No3>No1)&&(No3>No2))
    {
      printf("Maximum No is %d",No3);
    }
    else
    {
      printf("Please Enter Valid No...!!!");
    }
    
    return 0;
}