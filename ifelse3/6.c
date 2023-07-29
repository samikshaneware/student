//Accept the number of days from the from the user and calculate the charge for the library according to the following. 1)first five days=Rs 2/day. 2)next five days=Rs3/day. 3)next 5 days = Rs.4/day. 4)after 15 days= Rs.5/day.
#include<stdio.h>
int main()
{
	int c,D;
	printf("enter the days\n");
	scanf("%d",&D);
	if(D>=0 && D<=5){
	c=2*D;
	printf("%d",c);
	}
	else if(D>=6 && D<=10){
	c=3*D;
	printf("%d",c);
	}
	else if(D>=11 && D<=15){
	c=4*D;
	printf("%d",c);
	}
	else if(D>15){
	c=5*D;
	printf("%d",c);
	}
	return 0;
	}
