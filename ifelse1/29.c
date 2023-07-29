//write a program to calculate the percentage of each subject in the above question.
#include<stdio.h>
int main()
{
int A,B,C,D,E,P,Total;
printf("enter the number");
scanf("%d %d %d %d %d %d",&A,&B,&C,&D,&E,&Total);
P=((A+B+C+D+E)*100/Total);
printf("%d",P);
return 0;
}
