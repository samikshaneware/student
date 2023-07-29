//Construct a flowchart for obtaining the sum of a given number of terms (n) for a given value of X in the following mathematical series: (Input X and n from the user)
#include<stdio.h>
#include<stdio.h>
int main()
{
    int n;
    int x;
    int i=1;
    int k=2;
    int sum=x;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n){
    sum=sum+(pow(x,p)/k);
    k++;
    i++;
    }
    printf("%d\n",sum);
    return 0;
    }
