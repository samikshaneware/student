//construct a flowchart to check whether a no is largest 3 digit no.
#include<stdio.h>
int main()
{
   int N;
   printf("enter the number N\n");
   scanf("%d",&N);
   if(N>998)
  {
  if(N<1000)
 {
 printf("No. is largest 3 digit no");
 }
 else{
 printf("invalid");
 }
 }
 else{
 printf("invalid");
 }
 return 0;
 }
 
