#include<stdio.h>
#include<math.h>
int main()
{
    int n,l,r,sum=0,temp;
    scanf("%d",&n);
    l=(int)log10(n)+1;
    temp=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+pow(r,l);
        n=n/10;
        l--;
    }
    if(temp==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
