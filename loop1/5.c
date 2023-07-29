//Construct a flowchart to show how to find the product of n natural numbers.
#include<stdio.h>
int main()
{
    int n;
    int i=1;
    int p=1;
    printf("enter the number\n");
    scanf("%d",&n);
    while(i<=n)
    {
    p=p*i;
    i+=1;
    printf("%d\n",p);
    }
    return 0;
}
