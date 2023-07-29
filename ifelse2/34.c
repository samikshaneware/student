//A teacher has divided her classroom into groups of 5 based on their roll numbers. The last roll number of each group has been elected as the leader of the group who will manage the tasks performed by the group. Write a program for the teacher to enter the roll number of the studenta and check if he/she is a group leader or not.
#include<stdio.h>
int main()
{
      int R;
      printf("enter the Roll no\n");
      scanf("%d",&R);
      if(R%5==0){
      printf("she is group leader");
      }
      else{
      printf("she is not a group leader");
      }
      return 0;
      }
