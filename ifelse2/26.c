//construct a flowchart to obtain 2 numbers (A and B)and an arithmetic operator (c) and then design a calculator depending upon the operator entered by the user.
#include<stdio.h>
int main()
{
    float A,B;
    char k;
    scanf("%c",&k);
    printf("enter the number A B\n");
    scanf("%f %f", &A, &B);
    if(k=='+'){
    printf("%f",A+B);
    }
    else if(k=='-'){
    printf("%f",A-B);
    }
    else if(k=='*'){
    printf("%f",A*B);
    }
    else if(k=='/'){
    printf("%f",A/B);
    }
    return 0;
    }
