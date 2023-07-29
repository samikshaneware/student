//Accept any input from users that marks of 5 subjects phy,chem, bio, math and comp. calculate percentage and grade according to following.
#include<stdio.h>
int main()
{
    int p;
    printf("enter the number of p\n");
    scanf("%d",&p);
    if(p>=90){
    printf("Grade A");
    }
    else if(p>=80){
    printf("Grade B");
    }
    else if(p>=70){
    printf("Grade C");
    }
    else if(p>=60){
    printf("Grade D");
    }
    else 
    if(p>=40){
    printf("Grade E");
    }
    else if(p<40){
    printf("Grade F");
    }
    else{
    printf("invalid");
    }
    return 0;
    }
