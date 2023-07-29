//Draw a flowchart to show the logic of obtaining the reversed form of a given whole number. (Input the number from the user)
#include<stdio.h>
int main()
{
       int n,rev=0,dig=0;
       printf("enter the number\n");
       scanf("%d", &n);
       while(n>0)
       {
       dig=n%10;
       rev=rev*10+dig;
       n=n/10;
       }
       printf("%d",rev);
       return 0;
}       
