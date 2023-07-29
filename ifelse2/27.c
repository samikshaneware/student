//Construct flowchart to obtain length(L), and breath(B) of rectangle and check whether its area is greater or perimeter is greater or both are equal.
#include<stdio.h>
int main()
{
  int L,B,Area,Perimeter;
  printf("enter the number\n");
  scanf("%d %d",&L,&B);
  Area=L*B;
  Perimeter=2*(L+B);
  if(Area==Perimeter){
  printf("Both are equal");
  }
  else if(Area>Perimeter){
  printf("Arear is greate");
  }
  else{
  printf("Perimeter is greater");
  }
  return 0;
  }
