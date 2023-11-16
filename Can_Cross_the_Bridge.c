#include<stdio.h>
int main()
{
    int x,y,z,n,m;
    scanf("%d%d%d",&x,&y,&z);
    if(x<=y<=z)
    {
        n=z-y;
        m=n/x;
        printf("%d",m);
    }
}