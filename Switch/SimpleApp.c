// Press 1 For Find Maximum From 2 No
// Press 2 For Find Maximum From 3 No
// Press 3 For Find Alphabet Or Not
// Press 4 For Find Even Or Odd
// Press 5 For Find Positive,Negative And Zero No.

#include<stdio.h>

int main()
{
    int Press = 0, No = 0, No1 = 0, No2 = 0, No3 = 0;
    char ch = '\0';

    printf("\n Press 1 For Find Maximum From 2 No. \n Press 2 For Find  Maximum From 3 No. \n Press 3 For Find Alphabet Or Not. \n Press 4 For Find Even Or Odd. \n Press 5 For Find Positive,Negative And Zero No.");

    printf("\n\n Enter a Number Between 1 To 5 To Perform Above Opration : ");
    scanf("%d",&Press);


    switch(Press)
    {
        case 1 :
         printf("\n Enter The First No : ");
         scanf("%d",&No1);

         printf("\n Enter The Second No : ");
         scanf("%d",&No2);

         (No1>No2)? printf("\n Number First is Maximum.") : printf("\n Number Second is Maximum.");

         break;

        case 2 : 
            
            printf("\n Enter The First No : ");
            scanf("%d",&No1);

            printf("\n Enter The Second No : ");
            scanf("%d",&No2);

            printf("\n Enter The Third No : ");
            scanf("%d",&No3);

            ((No1>No2)&&(No1>No3))? printf("\n Number First is Maximum.") : ((No2>No1)&&(No2>No3)) ? printf("\n Number Second is Maximum.") : ((No3>No1)&&(No3>No2)) ? printf("\n Number Third is Maximum.") : printf("\n Numbers are Equal.");
            
            break;
        case 3 : 

            printf("\n Enter a Character ");
            scanf("%c",&ch);

            ((ch >='a')&&(ch<='z')) ? printf("\n Given Character is Alphabet.") : ((ch >= 'A')&&(ch <= 'Z')) ? printf("\n Given Character is Alphabet.") : printf("\n Given Character is Not a Alphabet");
            
            break;
        case 4 : 

            printf("\n Enter the No : ");
            scanf("%d",&No);

            (No % 2 == 0) ? printf("\n Given Number is Even. ") : printf("\n Given Number is Odd. ");
            
            break;
        case 5 :

            printf("\n Enter the No : "); 
            scanf("%d",&No);

            (No > 0) ? printf("\n Given Number is Positive.") : (No < 0) ? printf("Given Number is Negative.") : printf("Given Number is Zero");
            break;

        default :
            printf("Please Enter Valid Number.!!");

        return 0;    
    }
}

