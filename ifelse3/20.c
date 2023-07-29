//Find the third max of 4 numbers. (Use minimum number of comparisons).
#include<stdio.h>
int main()
{
                int a,b,c,d,max,min,max2,min2;
                printf("enter the number a,b,c,d\n");
                scanf("%d %d %d %d",&a,&b,&c,&d);
                if(a>b){
                  max=a;
                  min=b;
                  }
                else{
                  max=b;
                  min=a;
                  }
                if(c>d){
                  max2=c;
                  min2=d;
                }
                else{
                  max2=d;
                  min2=c;   
                }
                if(max>max2){
                    if(max2>min){
                        printf("%d",min);
                        }
                    else{
                        printf("%d",max2);
                        }
                        }
                else if(max>min2){
                        printf("%d",min2);
                        }
                else{
                        printf("%d",max);
                        }
                        return 0;
                        }           
