#include<stdio.h>
int main()
{
    int r,v[2004],k,a=0,l=0;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {
        a+=v[k];
    }
    a=a/r;
    for(k=0;k<r;k++)
    {
        if(v[k]<=a)
        {
            l++;
        }
    }
    printf("%d",l);
}