//Draw a flowchart to show how to obtain the HCF and LCM of two numbers. (input two numbers from the user)
#include<stdio.h>
int main()
{    
int a,b,p,r,hcf,lcm;
printf("enter the value of a,b");
scanf("%d\n %d",&a,&b);
p=a*b;
while(b>0){
r=a%b;
a=b;
b=r;
}
hcf=a;
lcm=(p/hcf);
printf("%d %d",hcf,lcm);
return 0;
}   
