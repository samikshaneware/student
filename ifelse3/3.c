//construct a flowchart to input electricty unit charges and calculate the total electricity bill accordint to the given condition.  1)for first 50 units RS.0.50/unit. 2)for next 100 units Rs. 0.75/unit. 3)for the next 100unit 1.20/unit. 4)for unit above 350 Rs.1.50/unit An additional surcharge of 20% is added to the bill.
#include<stdio.h>
int main()
{
       int unit, Bill;
       printf("enter the unit\n");
       scanf("%d",&unit);
       if(unit<=50){
       Bill=(unit*0.50);
       printf("%d",Bill);
       }
       else if(unit<=150){
       Bill=(50*0.50)+(unit-50)*0.75;
       printf("%d",Bill);
       }
       if(unit<=250){
       Bill=(50*0.50)+(100*0.75)+(unit-250)*1.20;
       printf("%d",Bill);
       }
       else if(unit>250){
       Bill=(50*0.50)+(100*0.75)+(100*1.20)+(unit-250)*1.50;
       printf("%d",Bill);
       }
       return 0;
       }
