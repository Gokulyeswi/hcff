# hcff
#include<stdio.h>
#include<string.h>
int main()
{
int x,y,max,min;
printf("enter any two number: ");
scanf("%d%d",&x,&y);
    if(x>y)
         max=y;
    else
         max=x;

    for(int i=max;i>=1;i--){
         if(x%i==0&&y%i==0){
             printf("\nHCF of two number is : %d",i);
             break;
         }
    }   
}
