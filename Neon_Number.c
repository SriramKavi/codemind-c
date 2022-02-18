#include<stdio.h>
int main()
{
    int sq,r,n,sum=0;
    scanf("%d",&n);
    sq=n*n;
    while(sq!=0)
    {
        r=sq%10;
        sum=sum+r;
        sq=sq/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else 
    {
        printf("Not Neon Number");
    }
    return 0;
}