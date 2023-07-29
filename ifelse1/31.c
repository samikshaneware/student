//A store sells Vadapavs & Samosas. They want a system where they enter the number of Vadapavs (V) and Samosas (S) a customer buys and a bill with the final price is automatically calculated and displayed. A Vadapav costs 12₹, while a Samosas costs 15₹. Write a program to create such a system.
#include<stdio.h>
int main()
{
int s,v,a;
printf("enter the number s,v");
scanf("%d %d",&s,&v);
a=s*15+v*12;
printf("%d",a);
return 0;
}
