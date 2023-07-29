//Construct a flowchart to show how to determine whether a given number is a perfect number.  (Input the number from the user) Note: A number is said to be a perfect number if the sum of its factors (except itself) equals the number.
#include<stdio.h>
int main()
{
         int i,n,sum=0;
         printf("enter the number\n");
         scanf("%d",&n);
         for(i=1; i<n; i++)
         {
             if(n%i==0){
             sum=(sum+i);
         printf("%d\n",sum);
         }
         }
         if(sum==n){
             printf("number is a perfect number");
             }
         else{
         printf("Invalid");
         }
         return 0;
}
