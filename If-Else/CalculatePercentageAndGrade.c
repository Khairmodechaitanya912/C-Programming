//  Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
//     Percentage >= 90% : Grade A
//     Percentage >= 80% : Grade B
//     Percentage >= 70% : Grade C
//     Percentage >= 60% : Grade D
//     Percentage >= 40% : Grade 



#include<stdio.h>
int main(){
    int sub1 = 0;
    int sub2 = 0;
    int sub3 = 0;
    int sub4 = 0;
    int sub5 = 0;
    float per = 0.0;

    printf("Enter the Marks of Physics => ");
    scanf("%d",&sub1);

    printf("Enter the Marks of Chemistry => ");
    scanf("%d",&sub2);

    printf("Enter the Marks of Biology => ");
    scanf("%d",&sub3);

    printf("Enter the Marks of Maths => ");
    scanf("%d",&sub4);

    printf("Enter the Marks of Computer Science => ");
    scanf("%d",&sub5);

    per = ((sub1+sub2+sub3+sub4+sub5)*100)/500;
    if(per>=35){
        if(per>=90)
        {
            printf("Your Percentage is %f And Your Grade is A.!!",per);
        }
        else if(per>=80)
        {
            printf("Your Percentage is %f And Your Grade is B.!!",per);
        }
        else if(per>=70)
        {
            printf("Your Percentage is %f And Your Grade is C.!!",per);
        }
        else if(per>=60)
        {
            printf("Your Percentage is %f And Your Grade is D.!!",per);
        }
        else if(per>=40)
        {
            printf("Your Percentage is %f And Your Grade is E.!!",per);
        }
        else{
            printf("Your Percentage is %f And Your Grade is F.!!",per);
        }
    }
    else
    {
        printf("Your Percentage is %f And Your Are Fail.!!",per);
    }
}