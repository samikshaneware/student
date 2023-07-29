//A shop will give a discount of 10% if cost of purchased quantity is more than 1000, ask user for quantity suppose one unit will cost 100 judge and print total cost for user. (purchase quantity PQ).
#include<stdio.h>
int main()
{
int PQ,D,TC,a;
printf("enter the number\n");
scanf("%d",&a);
PQ=a*100;
if(PQ>1000){
TC=PQ*10/100;
TC=PQ-TC;
printf("%d",TC);
}
else
{
printf("no discount");
}
return 0;
}
