//Find the second max of 4 numbers. (Use minimum number of comparisons)
#include<stdio.h>
int main()
 {
            int a,b,c,d,max,min,max2,min2;
            printf("enter the value of a,b,c,d\n");
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
                  printf("%d",max2);
                  }
                else{
                  printf("%d",min);
                  }
                  }
            else if(max>min2){
                  printf("%d",max);
                  }
            else{
            printf("%d",min2);
            }
            return 0;
            }
