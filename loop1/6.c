//Draw a flowchart to show how to find all even natural numbers that are divisible by 7 in a given range. (Input lower and upper limit of the range from the user)
#include<stdio.h>
int main()
{
      int m,n;
      printf("enter the lower limit and upper limit\n");
      scanf("%d %d",&m,&n);
      for(m=m; m<=n; m=m+1)
      { 
         if(m%2==0 && m%7==0)
         { 
         printf("%d",m);
         }
       }  
            return 0;
}
