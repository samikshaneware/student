//Roller coasters require childeren to have minimum height of 5 feet any child below this height is generally not allowed on them. write a program to accept a child's height in inches and display if he or she will be allowed to ride or not.
#include<stdio.h>
int main()
{
       int h;
       printf("enter the number H\n");
       scanf("%d",&h);
       h=h/12;
       if(h<5){
       printf("not allowed to ride");
       }
       else if(h>=5){
       printf("allowed to ride");
       }
       return 0;
       }
       
