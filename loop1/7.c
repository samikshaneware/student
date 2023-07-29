//Construct a flowchart to find the sum of the squares of the first 9 natural numbers that are divisible by 3.
#include<stdio.h>
int main()
{
  int i=1,n=9,sum=0,c=1,a;
  while(c<=n)
  {
    if(i%3==0)
  {
     sum=sum+(i*i);
     c+=1;
  }
  i+=1;
  }
    printf("%d",sum);
  return 0;
}
