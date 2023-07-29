//Construct a flowchart to show how you can decide if a given number is prime or not.  (Input the number from  the user)
#include<stdio.h>
int main()
{
     int n,i=1,c=0;
     printf("enter the number\n");
     scanf("%d",&n); 
     while(i<=n){
         if(n%i==0){
         c=c+1;
         i++;
         }
         i++;
         }
         if(c==2){
         printf("Number is Prime numbe");
              }
         else{
         printf("Number is not prime number");
         }
      return 0;
}              
