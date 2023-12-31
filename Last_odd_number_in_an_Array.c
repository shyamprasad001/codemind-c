#include<stdio.h>
int main()
{
    int k,v[2004],l,r;
    scanf("%d",&l);
    for(k=0;k<l;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=l-1;k>=0;k--)
    {
        if(v[k]%2!=0)
        {
            r=v[k];
            break;
        }
    }
    printf("%d",r);
}