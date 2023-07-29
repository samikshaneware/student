//Write a program to obtain the Fahrenheit equivalent of a temperature given in Celsius where the relationship between the two scales of temperature is C/5 = (F-32)/9
#include<stdio.h>
int main()
{
int c,f;
printf("enter the number c");
scanf("%d",&c);
f=(9*c)/5+32;
printf("%d",f);
return 0;
}
