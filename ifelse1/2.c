//Write a program to take two numbers from the user and print their average
#include<stdio.h>
int main()
{
int a,b,sum,avg;
scanf("%d",&a);
scanf("%d",&b);
sum=(a+b);
avg=sum/2;
printf("avg of %d and %d is %d\n",a,b,avg);
return 0;
}
