//construct a flowchart to take selling price and cost price as input calculate profit percentage. 
#include<stdio.h>
int main()
{
              int sp,cp,P,profit;
              printf("enter a number sp,cp");
              scanf("%d",&cp);
              scanf("%d",&sp);
              if(sp>cp)
              {
              P=sp-cp;
              profit=(P
              *100)/cp;
              printf("%d\n",profit);
              }
              else
              {
              printf("invalid");
              }
              return 0;
}
