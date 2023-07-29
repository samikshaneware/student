//Accept temperature in degree celcius of water and check whether it is boiling or not.(boiling point-100degree c).
#include<stdio.h>
int main()
{
int temp;
printf("enter the temp in degree celcius\n");
scanf("%d",&temp);
if(temp>=100){
printf("water is boiling");
}
else{
printf("water is not boiling");
}
return 0;
}
