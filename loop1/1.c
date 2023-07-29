//Write a program to find the sum of the first n natural numbers, where n is any given integer.
#include<stdio.h>
int main()
   {
   int N,i,sum;
   printf("enter the numbe N\n");
   scanf("%d",&N);
   for(i=1; i<=N; i=i+1)
   {
   sum=sum+i;
   }
   printf("%d\n",sum);
   return 0;
   }
