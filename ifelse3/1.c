//construct a flowchart to find a maximum between three numbers.
#include<stdio.h>
int main()
{
   int a,b,c,Max,Min;
   printf("enter th number a b c\n");
   scanf("%d %d %d", &a,&b,&c);
   if(a>b){
   Max=a;
   Min=b;
   }
   else{
   Max=b;
   Min=a;
   }
   if(Max>c){
   printf("%d\n",Max);
   }
   else{
   printf("%d\n",c);
   }
   return 0;
   }
