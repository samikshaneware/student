//construct a flowchart to calculate profit or print the value of profit incurred, loss incurred or no profit, no loss, input(sp,cp).

#include<stdio.h>
int main()
{
int cp,sp,p,l;
printf("enter the number\n");
scanf("%d %d",&cp,&sp);
if(cp<=sp){
  if(cp==sp){
  printf("no profit no loss");
  }
  else
  {
  p=sp-cp;
  printf("profit");
  }
  }
else
{
l=cp-sp;
printf("loss");
}
return 0;
}
