//construct a flowchart to calculate the electricity bill.(Accept the number of units from the user) according to the followingcriteria.1)first 100 unit=no charge. 2)next 100 unit = Rs. 5 per unit. 3)after 200 units= Rs.10 per unit. (for example if input unit is 350 then total bill amount is Rs. 2000.
#include<stdio.h>
int main()
{
     int U,Bill;
     printf("enter the Unit\n");
     scanf("%d",&U);
     if(U<=100){
     printf("No charge");
     }
     else if(U>=100 && U<=200){
     Bill=(U-100)*5;
     printf("%d",Bill);
     }
     else if(U>=200){
     Bill=(U-200)*10+100*5;
     printf("%d",Bill);
     }
     else{
     printf("invalid");
     }
     return 0;
     }
