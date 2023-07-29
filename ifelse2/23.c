//Take an integer N and check whether it ends with 3 or 7. if ends with 3-print "ends with 3", if ends with 7 print"ends with 7".otherwise print no. itself.
#include<stdio.h>
int main()
{
int N;
printf("enter the number\n");
scanf("%d",&N);
if(N%10==3){
printf("Number ends with 3");
}
else if(N%10==7){
printf("Number ends with 7");
}
else{
printf("%d",N);
}
return 0;
}
