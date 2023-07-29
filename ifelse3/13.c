//In the above question take the first condition as divisibility of year by 100 and write a program. Do the dry run for the same inputs.
#include<stdio.h>
int main()
{
      int y;
      printf("enter the year\n");
      scanf("%d",&y);
      if(y%100==0){
         printf("Not Leap Year");
         }
      else if(y%4==0){
          printf("Leap Year");
          }
      else if(y%400==0){
        printf("Leap Year");
        }
      else{
      printf("Not Leap Year");
          }   
          return 0;
}
