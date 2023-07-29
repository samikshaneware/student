//Write a programto calculate the lateral surface area and Total surface area of a cube.(Input the side length of the cube from the user).
#include<stdio.h>
int main()
{
int a,L,T;
scanf("%d",&a);
L=4*(a*a);
T=6*(a*a);
printf("%d %d",L,T);
return 0;
} 
