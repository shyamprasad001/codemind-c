#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    int ans=z-y;
    printf("%d",ans/x);
}