//Construct a flowchart to find out the sum of first N terms of the following series. 5 + 55 + 555 + 5555 + .......... up to N terms.
#include<stdio.h>
int main()
{
      int n,i,s=0;
      printf("enter the number");
      scanf("%d",&n);
      for (i=5; i<=n; i++){
      s=s*10+5;
      }
      printf("%d",s);
      return 0;
}      
