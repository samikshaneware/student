//construct a flowachart to obtain a number N and increment its value by 1 if the no. is divided by 4. otherwise decremnt its value by 1.
#include<stdio.h>
int main()
{
           int a;
           printf("enter the number\n");
           scanf("%d",&a);
           if(a%4==0){
           printf("%d",a+1);
           }
           else{
           printf("%d",a-1);
           }
           return 0;
           }
           
