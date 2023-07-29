//Construct a flowchart to check if a given number is one digit or two digit or three digits or more than three digits.
#include<stdio.h>
int main()
{
       int N;
       printf("enter the number N\n");
       scanf("%d",&N);
       if(N<=9){
       printf("N is one digit");
       }
       else if(N<=99){
       printf("N is two digit");
       }
       else if(N<=999){
       printf("N is three digit");
       }
      else{
      printf("No is more than three digit");
      }
      return 0;
      }
       
