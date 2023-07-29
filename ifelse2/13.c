//construct a flowchart to check whether person is eligible for voting or not voting, age is 18years.
#include<stdio.h>
int main()
{
int Age;
printf("enter the Age\n");
scanf("%d",&Age);
if(Age>=18){
printf("Person is eligible for voting");
}
else{
printf("Person is not eligible for voating");
}
return 0;
}
