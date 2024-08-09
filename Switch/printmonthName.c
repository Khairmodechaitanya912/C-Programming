#include<stdio.h>

int main()
{
    int month = 0;

    printf("\n Enter Months No : ");
    scanf("%d",&month);

    switch(month)
    {
        case 1 :
            printf("\n Jan");
            break;    
        case 2 :
            printf("\n Feb");
            break;    
        case 3 :
            printf("\n Mar");
            break;    
        case 4 :
            printf("\n April");
            break;    
        case 5 :
            printf("\n May");
            break;
        case 6 :
            printf("\n Jun");
            break;        
        case 7 :
            printf("\n July");
            break;    
        case 8 :
            printf("\n Aug");
            break;    
        case 9 :
            printf("\n Sept");
            break;        
        case 10 :
            printf("\n Oct");
            break;    
        case 11 :
            printf("\n Nov");
            break;    
        case 12 :
            printf("\n Dec");
            break;    
        default :
            printf("\n Invalid Month Number..!!");    
    }

    return 0;
}