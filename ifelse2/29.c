//construct flowchart to iput the months number and print no of day in month.
#include<stdio.h>
int main()
{
   int MN;
   printf("enter the number MN\n");
   scanf("%d",&MN);
   if(MN==3 ||MN==5 || MN==7 || MN==9 || MN==10 || MN==12){
   printf("31 days");
   }
   else if(MN==4 || MN==6 || MN==8 || MN==10){
   printf("30 days");
   }
   else if(MN==2){
   printf("28 days or 29 days");
   }
   else{
   printf("invalid");
   }
   return 0;
   }
