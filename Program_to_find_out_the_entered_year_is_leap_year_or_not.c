#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    if(i%400==0 || i%4==0 && i%100!=0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}