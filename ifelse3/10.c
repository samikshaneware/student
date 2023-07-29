//The following rules are used to calculate the bonus for the employees of an organization. (i) If the pay is more than $3,000, the bonus amount is fixed, and it is equal to $300. (ii) If the pay is more than $1,600, but less than or equal to $3,000, the bonus will be 10% of the pay subject to a maximum of $240. (iii) If the pay is less than or equal to $1,600, the bonus is 15% of pay, subject to a minimum of $100.
#include<stdio.h>
int main()
{
    int P, Bonus;
    printf("enter paying amount\n");
    scanf("%d",&P);
    if (P>3000){
    Bonus=P+300;
    printf("%d",Bonus);
    }
    else if (1600<=P>=3000){
        Bonus=P*10/100;
        if (Bonus<=240){
        printf("240");
        }
        else{
        printf("%d",Bonus);
        }
        }
    else if (P<=1600){
    Bonus=P*15/100;
       if(Bonus<100){
       printf("100");
       }
       }
       else{
       printf("No Bonus");
       return 0;
       }
       }
