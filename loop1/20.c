//Develop a flowchart to show how to determine all the 3-digit Armstrong numbers. A number is called an Armstrong number if the sum of the values of the digits each raised to the power equal to the number of digits in the number equals the number. For example, 153 is an Armstrong number, because 153 = 13 + 53 + 33.
#include<stdio.h>
int main()
{
           int n,r,sum=0;
           for (n=100; n<=999; n++)
           {
           int temp=n;
           sum=0;
           while (temp>0)
           {
               r=temp%10;
               sum+=pow(r, 3);
               temp/=10;
           }
           if (sum==n)
           {
               printf("%d\n", n);
           }
          }
         return 0;
}
