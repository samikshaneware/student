//Find the maximum occuring number out of the given 5 numbers.
#include<stdio.h>
int main()
{
         int a,b,c,d,e,max,max2,max3,sum,sum2,sum3;
         printf("enter the number a,b,c,d,e\n");
         scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
         if(a>=b){
         max=a;
         sum=b;
         }
         else{
         max=b;
         sum=a;
         }
         if(c>=d){
         max2=c;
         sum2=d;
         }
         else{
         max2=d;
         sum2=e;
         }
         if(max>=max2){
         max3=max;
         sum3=max2;
         }
         else{
         max3=max2;
         sum3=max;
         }
         if(max>=e){
         printf("%d",e);
         }
         else{
         printf("%d",max3);
         }
         return 0;
         }
