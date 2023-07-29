//The grades in a certain class are determined by coursework and a written examination. Both components of the assessment carry a maximum of 50 points.(i) A student must score a total of 45% or more in order to pass (ii) A total grade of 44% is moderated to 45% (iii) Each component must be passed with a minimum of 20 points (iv) If a student scores 45% or more, but does not achieve the minimum grade in one component, he is given a technical fail of 44%, which is not moderated to 45%.
#include<stdio.h>
int main()
{
              int cm,wm,t;
              printf("enter the number\n");
              scanf("%d %d",&cm,&wm);
              t=cm+wm;
              if(t>45){
                  if(cm>20){
                     if(wm>20){
                     printf("Pass");
                     }
                     else
                     {
                     printf("fail");
                     }
                     }
                     }
                  else if(t==44){
                  t=45;
                  printf("moderate");
                  }
                  else if(t>45 && cm<20){
                  printf("Technical fail");
                  }
                  else{
                  printf("Fail");
                  }
                 return 0;
              }
