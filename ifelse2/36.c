//Construct a flowchart to accept the cost price of a bike and display the road tax to be paid according to the following criteria.
#include<stdio.h>
int main()
{ 
    int cp,T;
    printf("enter the cp\n");
    scanf("%d",&cp);
    if(cp>100000){
    T=cp*15/100;
    printf("%d",T);
    }
    else if(cp>500,cp<=100000){
    T=cp*10/100;
    printf("%d",T);
    }
    else if(cp<=50000){
    T=cp*5/100;
    printf("%d",T);
    }
    return 0;
    }
