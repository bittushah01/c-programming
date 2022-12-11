#include<stdio.h>

int main()
{
    int a , b ;
    int add , sub , mult , divi , mod , incer , dcer ;

    printf("plz enter the value of a :");
    scanf("%d",&a);
    printf("plz enter the value of b :");
    scanf("%d",&b);

    add = a + b ;
    printf("so the value of add : %d\n",add);
     
    sub = a - b ;
    printf("so the value of sub : %d\n",sub);

    mult = a * b ;
    printf("so the value of mult :%d\n",mult);

    divi = a / b ;
    printf("so the value of divi :%d\n",divi);

    mod = a % b ;
    printf("so the value of mod :%d\n",mod);

    incer = ++ a ;
    printf("so the value of incer :%d\n",incer);

    dcer = -- b;
    printf("so the valu of dcer :%d\n",dcer);

    return 0;
}