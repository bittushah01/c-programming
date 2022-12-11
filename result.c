#include <stdio.h>

int main()
{
    int eng, nep, math, social, science, totalMarks;
    float result;

    printf("Please enter the marks of eng:");
    scanf("%d", &eng);
    printf("Please enter the marks of nep:");
    scanf("%d", &nep);
    printf("Please enter the marks of math:");
    scanf("%d", &math);
    printf("Please enter the marks of social:");
    scanf("%d", &social);
    printf("Please enter the marks of science:");
    scanf("%d", &science);

    totalMarks = eng + nep + math + social + science ;
    printf("sum of totalMarks: %d\n",totalMarks);

     result = (totalMarks * 100)/ 500; ;
     printf("present of result : %.2f %%",result);


     return 0;
     

}
