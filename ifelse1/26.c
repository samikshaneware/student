//Write a program to calculate how many books we can buy if we have x Rs . (Cost of a book = Rs. y)(input x,y from user)
#include<stdio.h>
int main()
{
int x,y,B;
printf("enter the number");
scanf("%d %d",&x,&y);
B=x/y;
printf("%d",B);
return 0;
}
