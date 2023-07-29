//Write a program to Calculate the selling price of a product if MRP and discount are given(Input MRP and discount from user).
#include<stdio.h>
int main()
{
int MRP,dis,sp;
scanf("%d %d",&MRP,&dis);
sp=MRP-dis;
printf("%d",sp);
return 0;
}
