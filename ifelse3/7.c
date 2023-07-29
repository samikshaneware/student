//You have denominations of rupee notes in the following form-1,2,5,10,20,100,200,500,2000. Take any amlount from the user and print the minimum number of notes needed to add up to that number.
#include<stdio.h>
int main()
{
	int n,s;
	printf("enter the number\n");
	scanf("%d",&n);
	s=0;
	if(n>=2000){
	s=s+n/2000;
	n=s+n;
	n=n/2000;
	printf("%d note of 2000\n",s);
	}
	else if(n>=500){
	s=s+n/500;
	n=s+n;
	n=n/500;
	printf("%d note of 500\n",s);
	}
	else if(n>=200){
	s=s+n/200;
	n=s+n;
	n=n/200;
	printf("%d note of 200\n",s);
	}
	else if(n>=100){
	s=s+n/100;
	n=s+n;
	n=n/100;
	printf("%d note of 100\n",s);
	}
	else if(n>=20){
	s=s+n/20;
	s=s+n;
	n=n/20;
	printf("%d note of 20\n",s);
	}
	else if(n>=10){
	s=s+n/10;
	s=s=n;
	n=n/10;
	printf("%d note of 10\n",s);
	}
	else if(n>=5){
	s=s+n/5;
	s=s+n;
	n=n/5;
	printf("%d note of 5\n",s);
	}
	else if(n>=2){
	s=s+n/2;
	n=s+n;
	n=n/2;
	printf("%d note of 2\n",s);
	}
	else if(n>=1){
	s=s+n/1;
	n=s+n;
	n=n/1;
	printf("%d note of 1\n",s);
	}
	return 0;
	}
