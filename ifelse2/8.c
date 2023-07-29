//construct a flowchart to check wether the no. is smallest 4 digit no.
#include<stdio.h>
int main()
{
int N;
printf("enter the number N\n");
scanf("%d",&N);
if(N<9999)
{
printf("no. is smallest 4 digit no");
}
else
{
printf("no. is not smallest 4 digit no");
}
return 0;
}
