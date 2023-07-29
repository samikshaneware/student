//Accept any city ffrom user and display its monuments of that city. 
#include<stdio.h>
int main()
{
     int city;
     printf("enter the city\n");
     scanf("%d",&city);
     if("city==Delhi"){
     printf("Red Fort");
     }
     else if("city==Agra"){
     printf("Taj Mahal");
     }
     else if("city==Jaipur"){
     printf("Jal Mahal");
     }
     else{
     printf("invalid");
     }
     return 0;
     }
