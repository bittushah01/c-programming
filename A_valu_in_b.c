#include<stdio.h>
#include<math.h>

int main(){
   int a;
int b;
int temp;


printf("enter number a:");
scanf("%d",&a);

printf("enter number b:");
scanf("%d",&b);

temp = b;

 
b=a;


a=temp;
printf("so the valu of a:%d\n so the valu of b:%d\n",a,b);

return 0;
}