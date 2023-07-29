//Construct flowchart to print name of days (input a no. from user in a range o to 6 and print Monday for 0, Tue for 1, so on.......)
#include<stdio.h>
int main()
{
int n;
      scanf("%d",&n);
      if(n==0){
      printf("Monday");
      }
      else if(n==1){
      printf("Tuesday");
      }
      else if(n==2){
      printf("Wednesday");
      }
      else if(n==3){
      printf("Thursday");
      }
      else if(n==4){
      printf("Friday");
      }
      else if(n==5){
      printf("Saturday");
      }
      else if(n==6){
      printf("Sunday");
      }
      return 0;
      }
