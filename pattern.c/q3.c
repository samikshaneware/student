//Given an integer number(N) as input. Write a program to print the right-angle triangular pattern of N line using an asterisk(*) character.
/*
*
**
***
****
******
*/
#include<stdio.h>
int main()
{
  int n;
  printf("enter the number");
  scanf("%d",&n);
  for(int i=1; i<=n; i++){
  
    	 for(int j=1; j<=i; j++){
      	 printf("* ");
       }
    printf("\n");
  }
return 0;
}