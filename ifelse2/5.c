//Construst a flowchart to take selling price and cost price as input calculate losspercentage.
#include<stdio.h>
int main()
{
    int cp,sp,loss,lp;
    printf("enter the number");
    scanf("%d%d",&cp,&sp);
    if(cp>sp);
    {
    loss=cp-sp;
    lp=(loss*100)/cp;
    printf("%d\n",lp);
    }
    if(cp==sp);
    {
    printf("invalid");
    }
    }
