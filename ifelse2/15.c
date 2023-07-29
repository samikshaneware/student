//construct a flowchart to input the marks of two students in 5 subject and check who is topper.
#include<stdio.h>
int main()
{
int M,N,T,P,a,b,c,d,e,u,v,w,x,y;
printf("enter the number\n a\n b\n c\n d\n e\n u\n v\n w\n x\n y\n");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
scanf("%d %d %d %d %d",&u,&v,&w,&x,&y);
M=(a,b,c,d,e);
N=(a,b,c,d,e);
scanf("%d",&T);
P=((a+b+c+d+e)/T)*100;
if(M>N){
printf("M is topper");
}else
{
printf("N is topper");
}
return 0;
}
