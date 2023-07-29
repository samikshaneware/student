//Construct a flowchart to show how the factors of a given number can be obtained. (Input the number from the user)
#include<stdio.h>
int main()
{
      int n,i;
      printf("enter the number\n");
      scanf("%d",&n);
      for (i=1; i<=n; i++)
      {
          if(n%i==0)
          { 
              printf("%d\n",i);
           }
      }  
      return 0;   
}      
