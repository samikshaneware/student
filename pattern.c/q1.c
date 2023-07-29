//Write a program to print a solid square pattern of N rows and N columns. using the asterisk character(*), where interger N is givern as an input.
/*
***
***
***
*/
#include<stdio.h>
int main()
{
   int n;
   printf("enter the number");
   scanf("%d",&n);
   for(int i=1; i<=n; i++){
      for(int j=1; j<=n; j++){
         printf("* ");
     }
    printf("\n");
  }
return 0;
}
