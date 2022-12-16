#include<stdio.h>
#include<math.h>

int main(){
    int cp;
    int sp;
    int amount;

    printf("plz enter amont cp:");
    scanf("%d",&cp);

    printf("plz enter amount sp:");
    scanf("%d",&sp);

    if (cp > sp)
    {
        amount = cp-sp;
        printf("it is loss %d",&amount);
    }
    else if (cp < sp)
    {
        amount = sp -cp;
        printf("it is profit %d",&amount);
    }
    else
    {
        printf("it is not loss or profit");
    }
    
} 