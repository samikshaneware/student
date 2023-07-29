/*
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
1 2 3 4 5 
*/
#include<stdio.h>
int main()
{
      int n;
      printf("enter the number of rows: ");
      scanf("%d",&n);
      for(int i=1; i<=n; i++){
         for(int i=1; i<=n; i++){
            printf("%d ",i);
        }
        printf("\n");
     }
        return 0;
   }     
