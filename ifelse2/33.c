//construct a flowchart to input basic salarty of an employee and calculate its Gross salary according to following: 1)Basic-salary<=10000:HAR=20% DA=80%,                   2)Basicsalary<=20000:HAR=25% 3)Basic-salary>20000:HAR=30% DA=95%.
#include<stdio.h>
int main()
{
   int bs,HRA,DA,GS;
   printf("enter the number bs\n");
   scanf("%d",&bs);
   if(bs<0){
   printf("invalid");
   }
   else if(bs<=10000){
   HRA=bs*20/100;
   DA=bs*80/100;
   GS=bs+HRA+DA;
   printf("%d",GS);
   }
   else if(bs<=20000){
   HRA=bs*25/100;
   DA=bs*90/100;
   GS=bs+HRA+DA;
   printf("%d",GS);
   }
   else if(bs>20000){
   HRA=bs*30/100;
   DA=bs*95/100;
   GS=bs+HRA+DA;
   printf("%d",GS);
   }
   else{
   printf("Invalid amount");
   }
   return 0;
   }
