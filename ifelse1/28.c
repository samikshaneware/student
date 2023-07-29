//write a program to calculate the total marks obtained by a student in examination. (Subjects : - Hindi, Maths, English, Science, Computer)(Input marks of all 5 subjects from the user)
#include<stdio.h>
int main()
{
int A,B,C,D,E,F,Sum;
printf("enter the number");
scanf("%d %d %d %d %d",&A,&B,&C,&D,&E);
Sum=A+B+C+D+E;
printf("%d",Sum);
return 0;
}
