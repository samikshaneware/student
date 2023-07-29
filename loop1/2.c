//Draw a flowchart to find the sum of the first 15 even natural numbers.
#include<stdio.h>
int main()
{
            int N,i,sum=0;
            printf("enter the number\n");
            scanf("%d",&N);
            for(i=1; i<=N; i=i+1)
            {
            if(i%2==0){
            sum=sum+i;
            }
            }
            printf("%d",sum);
            return 0;
            }
