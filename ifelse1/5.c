//Write a program to show the steps in finding the simple interest on a given amount at a given rate of interest.(Input amount, rate of interest and time from the user)
#include<stdio.h>
int main()
{
int p,r,t,SI;
scanf("%d",&p);
scanf("%d",&r);
scanf("%d",&t);
SI=p*r*t/100;
printf("%d",SI);
return 0;
}
