//Write a program to calculate the area and perimeter of a rectangle.(Input length and breadth of the rectangle from the user)
#include<stdio.h>
int main()
{
int l,b,A,P;
scanf("%d",&l);
scanf("%d",&b);
A=l*b;
P=2*(l+b);
printf("%d\n %d",A,P);
return 0;
}
