// 1) press + For Addition Of Two Numbes.
// 2) press - For Substraction Of Two Numbes.
// 3) press * For Multiplication Of Two Numbes.
// 4) press / For Division Of Two Numbes.
// 5) press % For Modular Of Two Numbes.

#include<stdio.h>

int main()
{
    int No1 = 0 , No2 = 0,res = 0;
    char choice = '\0';

    printf("\n 1) press + For Addition Of Two Numbes. \n 2) press - For Substraction Of Two Numbes. \n 3) press * For Multiplication Of Two Numbes. \n 4) press / For Division Of Two Numbes. \n 5) press %% For Modular Of Two Numbes.");

    printf("\n\n Enter Operator To Perform Above Opration : ");
    scanf("%c",&choice);

    switch(choice)
    {
        case '+':
            printf("\n Enter First Number : ");
            scanf("%d",&No1);
            printf("\n Enter Second Number : ");
            scanf("%d",&No2);

            res = No1 + No2;

            printf("\n Addition Of Given Two is %d ",res);
            break;

        case '-': 
            printf("\n Enter First Number : ");
            scanf("%d",&No1);
            printf("\n Enter Second Number : ");
            scanf("%d",&No2);

            res = No1 - No2;

            printf("\n Substraction Of Given Two is %d ",res);
            break; 

        case '*':  
            printf("\n Enter First Number : ");
            scanf("%d",&No1);
            printf("\n Enter Second Number : ");
            scanf("%d",&No2);

            res = No1 * No2;

            printf("\n Multiplication Of Given Two is %d ",res);
            break; 

        case '/':  
            printf("\n Enter First Number : ");
            scanf("%d",&No1);
            printf("\n Enter Second Number : ");
            scanf("%d",&No2);

            if()
            res = No1 / No2;

            printf("\n Division Of Given Two is %d ",res);
            break;  

        case '%':  
            printf("\n Enter First Number : ");
            scanf("%d",&No1);
            printf("\n Enter Second Number : ");
            scanf("%d",&No2);

            res = No1 % No2;

            printf("\n Modular Of Given Two is %d ",res);
            break;  

        default :
            printf("\n Please Enter Valid Operator...!!!");

            return 0;    
    }
}