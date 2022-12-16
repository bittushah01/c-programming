#include<stdio.h>


int main()
{

    int physics;
    int chemisty;
    int biology;
    int mathematics;
    int computer ;
    int total;
    int per;

    printf("plz enter the num of physics:");
    scanf("%d",&physics);
    printf("plz enter the num chemisty:");
    scanf("%d",&chemisty);
    printf("plz enter the num of biology:");
    scanf("%d",&biology);
    printf("plz enter the num of mathematics:");
    scanf("%d",&mathematics);
    printf("plz enter the num of computer:");
    scanf("%d",&computer);
    
    total = physics + chemisty + biology + mathematics + computer;
    printf("Total Marks: %d \n",total);
    per = (total / 5.0) ;
    printf("total present of mks: %d \n",per);


    if (per>=90)
    {
        printf("grade A");
    }
    else if (per>=80)
    {
        printf("grade B");
    }

    else if(per>=70)
    {
        printf("grade C");
    }
    else if(per>=60)
    {
        printf("grade D");
    }
    else if(per>=50)
    {
        printf("grade E");
    }
    else
    {
        printf("grade F");
    }
}