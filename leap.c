#include<stdio.h>
#include<conio.h>

int main(){
    int a;
    printf("enter the year a:");
    scanf("%d",&a);

    if (a % 4 != 0)
    {
        printf("common year");
    }
    else if (a % 100 !=0)
    {
        printf("leap year");
    }
    else if (a % 400 !=0)
    {
        printf("common year");
    }
    else 
    {
        printf("leap year");
    }
    
    
}