//construct a flowchart to take two input and print their difference if the first number is greater than second number otherwise print their sum.
#include<stdio.h>
int main()
{
int a,b,sum,difference;
printf("enter the number\n");
scanf("%d %d",&a,&b);
difference=a-b;
if(a>b){
printf("%d",difference);
}
else{
sum=a+b;
printf("%d",sum);
}
return 0;
}
