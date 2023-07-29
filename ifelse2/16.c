//construct flowchart to check whether number entered is three digit or not.
#include<stdio.h>
int main()
{
int N;
printf("enter the number N\n");
scanf("%d",&N);
if(N>=100 && N<=999)
{
printf("Number is 3 digit");
}
else{
printf("Number is not 3 digit");
}
return 0;
}
