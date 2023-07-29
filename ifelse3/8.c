//construct a flowchart to categerize the shape of a quadrilateral as either a square, rhombus having input the lengths of the four side and one internal angle.
#include<stdio.h>
int main()
{
	int AB,BC,CD,DA,I;
	printf("enter the number of AB,BC,CD,DA,I\n");
	scanf("%d\n %d\n %d\n %d\n %d",&AB,&BC,&CD,&DA,&I);
	if(AB==BC && BC==CD && CD==DA){
	       if(I==90){
	         printf("Square");
	         }
	       else{
	       printf("Rhombus");
	       }
	       }
	else if(AB==CD && BC==DA){
	       if(I==90){
	       printf("Rectangle");
	       }	                
	       else{
	       printf("Parallelogram");
	       }
	       }
	else if(AB!=BC && BC!=CD && CD!=DA){
	if(I!=90){
	 printf("irrigualar quadrilateral");
	 }
	else{
	     printf("it is not quadrilateral");
	     }
	     }
	return 0;
	}
	
