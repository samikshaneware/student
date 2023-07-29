//A company decide to give a bonus of 5% to an employee if his/her year of service is more than 5 years. ask users for their salary and year of service and print the net bonus amount.
   #include<stdio.h>
   int main()
   {
   int s,y,B;
   printf("enter the number s y\n");
   scanf("%d %d",&s,&y);
   if(y>5){
   B=s*5/100;
   printf("%d",B);
   }
   else{
   printf("you don't have any bonus amount");
   }
   return 0;
   }
