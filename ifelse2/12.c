//construct a flowchart to check whether last digit of number is divisible by 3 or not.
#include<stdio.h>
int main()
{
int N,d;
printf("enter the number N\n");
scanf("%d",&N);
d=N%10;
if(d%3==0){
printf("no is divisible by 3");
}
else{
printf("no is not divisible by 3");
}
return 0;
}
