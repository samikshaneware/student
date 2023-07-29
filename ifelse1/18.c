//Write a program to find the lateral surface area and Total surface area of a cuboid.(Input the side lengths of the cuboid from the user)
#include<stdio.h>
int main()
{
int l,w,h,LSA,TSA;
scanf("%d %d %d",&l,&w,&h);
LSA=2*(l+w)*h;
TSA=(2*l*w)+(2*l*h)+(2*h*w);
printf("%d %d",LSA,TSA);
return 0;
}
