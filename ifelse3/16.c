//Accept the lengths of the three sides of a triangle to validate whether they can be the sides of a triangle and then classify the triangle as equilateral (all three sides are equal), scalene (all three sides are different), or isosceles (exactly two sides are equal), and then to see whether it is a right-angled triangle (the sum of the squares of two sides is equal to the square of the third side.)
#include<stdio.h>
int main()
{
      int ab,bc,ac;
      printf("enter the value of ab,bc,ac\n");
      scanf("%d %d %d",&ab,&bc,&ac);
      if(ab==bc && bc==ac){
         printf("Equilateral");
         }
      else if(ab==bc){
         printf("Isosceles");
         }
      else if(ab*ab+bc*bc==ac*ac){
         printf("Right angle");
         }
      else{
      printf("Scalene");
      }
      return 0;
      }
