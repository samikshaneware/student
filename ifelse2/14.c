//construct a flowchart to display "Hello" if no. entered by user is multiple of 5 otherwise print "Bye".
#include<stdio.h>
int main()
{
int N;
printf("enter the number N\n");
scanf("%d",&N);
if(N%5==0){
printf("Hello");
}
else{
printf("Bye");
}
return 0;
}
