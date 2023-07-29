//A student will not be allowed to sit ina an exam if his /her attendance is less than 75%. Take following input from user. Number of classes held. No of classes attended and print percentage of classes attended. is student allowed to sit in exam or not. (No.of classes attended-A, No.of classes held-H)
#include<stdio.h>
int main()
{
int A,H,P;
printf("enter the number\n");
scanf("%d %d",&H,&A);
P=A*100/H;
if(P>=75){
printf("The student allowed to sit in exam");
}
else{
printf("Student is not alow to sit in exam");
}
return 0;
}
