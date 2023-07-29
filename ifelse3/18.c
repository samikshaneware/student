//Find the second max of 3 numbers. (Use minimum number of comparisons)
#include<stdio.h>
int main()
{
    int a,b,c,max,min;
    printf("enter the number a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
    max=a;
    min=b;
    }
    else{
    max=b;
    min=a;
    }
    if(max>c){
         if(c>min){
          printf("%d",c);
          }
         else{
          printf("%d",min);
          }
          }
    else{
     printf("%d",max);
     }
    return 0;
           }
