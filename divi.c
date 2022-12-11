#include<stdio.h>

int main()
{
    float a;
    float b;
    float divi;

    printf("plz enter the value of a:");
    scanf("%f",&a);
    printf("plz enter the value of b:");
    scanf("%f",&b);

    divi = a / b ;
    printf("so the comming the value of divi: %.2f",divi);
    return 0;
}