//Validate a given year. (Hint, The year in the date must be greater than zero, the months nust lie between 1 and 12, and the day must lie between 1 and 31, depending on the month numbers.)
#include<stdio.h>
int main()
{ 
    int d,m,y;
    printf("enter the year month date\n");
    scanf("%d\n %d\n %d",&y,&m,&d);
    if(y>0){
    printf("valid-year ");
    }
    else{
    printf("invalid-year ");
    }
    if(m<1){
    printf("invalid month ");
    }
    else if(m<=12){
    printf("valid-month ");
    }
    else{
    printf("invalid-month ");
    }
    if(d<1){
    printf("invalid-date ");
    }
    else if(d<=31){
    printf("valid-date ");
    }
    else{
    printf("invalid-date ");
    }
    return 0;
    }
