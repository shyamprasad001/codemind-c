#include<stdio.h>
int main()
{
    int n,r,sum=0,mul=1,x,y,v;
    scanf("%d",&n);
    v=n;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    x=sum;
    while(v!=0)
    {
        r=v%10;
        mul=mul*r;
        v=v/10;
    }
    y=mul;
    if(x==y)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}