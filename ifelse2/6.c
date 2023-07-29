//construct flowchart to take two side as input and check wether it is rectangle or square.
#include<stdio.h>
int main()
{
   int AB,BC;
   printf("enter the number\n");
   scanf("%d %d",&AB,&BC);
   if(AB==BC){
   printf("it is a square");
   }
   else
   {
   printf("it is rectangle");
   }
   return 0;
   }
