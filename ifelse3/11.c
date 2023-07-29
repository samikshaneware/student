//"A certain steel is graded according to the following conditions: (i) Rockwell-hardness > 50 (ii) Carbon content > 0.7 (iii) Tensile strength > 5600 kg/cm2 The steel is graded as follows: a. Grade 10, if all the conditions are satisfied b. Grade 9, if conditions (i) and (ii) are satisfied c. Grade 8, if conditions (ii) and (iii) are satisfied d. Grade 7, if conditions (i) and (iii) are satisfied e. Grade 0, otherwise.
#include<stdio.h>
int main()
{
       int Rh,cc,ts;
       printf("enter Rh,ts,cc\n");
       scanf("%d %d %d",&Rh,&ts,&cc);
       if(Rh>50 && cc>0.7 && ts>5600){
       printf("10 Grade");
       }
       else if(Rh>50 && cc>0.7 && ts<5600){
       printf("9 Grade");
       }
       else if(Rh<50 && cc>0.7 && ts>5600){
       printf("8 Grade");
       }
       else if(Rh>50 && cc<0.7 && ts>5600){
       printf("7 Grade");
       }
       else{
       printf("0 Grade");
       }
       return 0;
       }
