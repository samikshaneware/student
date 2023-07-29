//Some three-digit numbers show the property that the sum of the factorials of the digits equals the numbers, for example, 145 = 1! + 4! + 5! Develop a flowchart to show how to determine all such numbers.
#include<stdio.h>
int main()
{
   int n,j,f;
   int i=n;
   int s=0;
   printf("enter the number");
   scanf("%d",&n);
   while(i>0){
   j=i%10;
   f=1;
    if(j>1){
    f=f*j;
    j=j-1;
    }
    else{
    s=s+f;
    i=i%10;
    }
    printf("%d",s);
    }
    return 0;
}
