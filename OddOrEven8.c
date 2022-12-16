#include<stdio.h>
#include<math.h>

int main()
{
    int n ;
    int pw;
    int result;

    printf("enter the num");
    scanf("%d",&n);

    printf("enter the power");
    scanf("%d",&pw);

    result = pow(n,pw);
    printf("The value of %d to the power %d is %d",n,pw,result);
    return 0 ;
}