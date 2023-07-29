//Develop a flowchart to show how to find all the perfect numbers under 10,000.
#include<stdio.h>
int main()
{
   int n=10000;
   int i=1;
   while(i<=n){
       int j=1;
       int sum=0;
       while(j<i){
          if(i%j==0){
          sum=sum+j;
    }
    j++;
   }
   if(sum==i){
   printf("%d\n",i);
   }
   i++;
   }
   return 0;
   }   
