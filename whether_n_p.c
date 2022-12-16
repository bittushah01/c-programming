#include<stdio.h> 
#include<conio.h>

int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);

    if ( a < 0 )
    {
        printf("negative number");
    }
    else if ( a > 0 )
    {
        printf("positive number");
    }
    else
    {
        printf("zero");
    }
}