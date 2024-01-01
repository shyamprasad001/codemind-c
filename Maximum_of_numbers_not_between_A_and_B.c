#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int x,y,m=0,d=0;
    scanf("%d%d",&x,&y);
    for(i=0;i<n;i++)
    {
        if(a[i]>=x&&a[i]<=y)
        int s=0;
        else
        {
            if(a[i]>m)
            {
                m=a[i];
                d=1;
            }
        }
    }
    if(d==1)
    printf("%d",m);
    if(d==0)
    printf("-1");
}