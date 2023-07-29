//write a program to determine the acceleration due to gravity (g), where g can be obtained from the following formula:T = 2l/g where T = Time period of a simple pendulum And l = Effective length of the simple pendulum(Input T and l from user)
#include<stdio.h>
#include<math.h>
int main()
{
int T,l,G;
   printf("enter the number T,l");
   scanf("%d %d",&T,&l);
   G=(4*(pow((3.14),2))*l)/pow((T),2);
   printf("%d\n",G);
   return 0;
    }
