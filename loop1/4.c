//Construct a flowchart to print the numbers below 100 that are divisible by 7.
#include<stdio.h>
int main()
{
      int i=1;
      int n=100;
      while(i<=n) 
      {
      if(i%7==0){
      printf("%d\n",i);
      }
      i+=1;
      }
      return 0;
}
