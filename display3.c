#include<stdio.h>

void main() {
    int a,b,c;

    printf("Please enter the numbers");
    scanf("%d%d%d",&a,&b,&c);

    if (a > b && a > c){
        printf("%d is greater then %d and %d",a,b,c);
    }
    else if ( b > a && b > c){
        printf("%d is greater then %d and %d",b,a,c);
    }
    else {
        printf("%d is greater then %d and %d",c,a,b);
    }
}