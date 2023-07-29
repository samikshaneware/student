//Construct a flowchart to show how to find the sum of all the numbers that are divisible by P but not divisible by Q within a given range. (Input lower limit, upper limit, P, and Q from the user)
#include<stdio.h>
int main()
{
  int p,q,i,s=0;
  printf("enter the lower limit & upper limit\n");
  scanf("%d %d",&p,&q);
  for(i=p; i<=q;  i++)
  {
  if(i%p==0 && i%q!=0)
  {
  s=s+i;
  }
  printf("%d",s);
  }
  return 0;
}
