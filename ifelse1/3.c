// Write a program to show how to obtain the daily wage of a worker on the basis of the hours worked during the day.(Daily wage of a worker is determined by hours worked per day and the hourly wage rate. Input the number of hours worked from the user and the hourly wage rate)
#include<stdio.h>
int main()
{
int h,r,wage;
scanf("%d",&h);
scanf("%d",&r);
wage=h*r;
printf("wage of %d and %d is %d\n",h,r,wage);
return 0;
}
