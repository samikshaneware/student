//Construct a flowchart to print multiplication tables from 1 to 5.
#include<stdio.h>
int main()
{
    int i,j,n=10;
    for(int i=1; i<=10; i++){
    for(int j=1; j<=5; j++){
    printf("%5d",i*j);
    }
    printf("\n");
    }
      return 0;
}
