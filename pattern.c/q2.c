//Given two integers M and N, write a program to print a solid rectangle pattern of M rows and N columns using the asterisk character(*)
/*
****
****
****
*/
#include<stdio.h>
int main()
{
    int M,N;
    printf("enter the number M,N");
    scanf("%d %d",&M,&N);
    for(int i=0; i<M; i++){
       for(int j=0; j<N; j++){
         printf("* ");
         }
       printf("\n");
     }  
return 0;
}
