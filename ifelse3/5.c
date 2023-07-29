//Accept the age, gender("M,F"), and the number of days and display the wages accordingly. If the age does not fall in any range then display the following message, "Enter appropriate age".
#include<stdio.h>
int main()
{
	int a,d,f,m,w;
	char g;
	printf("enter the age\n");
	scanf("%d",&a);
	printf("enter working days\n");
	scanf("%d",&d);
	printf("enter gender\n");
	scanf("%c",&g);
	getchar();
	if (a>=18 && a<30){
	if(g=='m' || g=='f'){
	w=d*750;
	printf("%d",w);
	}
	}
	else if(a>=30 && a<=40){
	if(g=='m' || g=='f'){
	w=d*800;
	printf("%d",w);
	}
	else {
	w=d*850;
	printf("%d",w);
	}
	}
	return 0;
	} 
