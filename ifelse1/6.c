//If P amount of money is invested for N years at an annual rate of interest I, the money grows to an amount T, where T is given by T = P (1 + I/100)N. Write a program to show how T is determined.
#include<stdio.h>
#include<math.h>
int main()
{
int p,i,n,T;
           printf("Enter a number:p,i,n");
           scanf("%d %d %d",&p,&i,&n);
           T=p*pow((1+(i/100.0)),n);
           printf("%d\n",T);
           return 0;
}
