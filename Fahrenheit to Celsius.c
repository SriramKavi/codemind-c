#include<stdio.h>
int main()
{
    float F,C,N;
    scanf("%f",&F);
    N=F-32;
    C=N*5/9;
    printf("%.2f",C);
    return 0;
}