//Write a program to check if the given number is divisible by 5, 11, both or none.    (a)If it is divisible by 5 then print (b)If it is divisible by 11 then print 11 (c)If it is divisible by 5 and 11 then print “Both” (d)If it is not divisible by 5 and 11 then print “None”
#include<stdio.h>
int main()
{
   int n;
   printf("enter the number N\n");
   scanf("%d",&n);
   if(n%5==0 && n%11==0){
     printf("Both");
     }
   else if(n%5==0){
     printf("5");
     }
   else if(n%11==0){
     printf("11");
     }
   else{
     printf("None");
    }   
   return 0;
   }
