#include<stdio.h>
int main()
{
    int x,y,z,n,m;
    scanf("%d%d%d",&x,&y,&z);
    n=x*5+y*10;
    if(n>z)
    {
        m=n/z;
        printf("%d",m);
    }
    else
    {
    printf("0");
    }
}