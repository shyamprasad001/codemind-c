#include<stdio.h>
int main()
{
    int r=0,v[2004],k,n;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<n-2;k++)
    {
        if(v[k]%2!=0 && v[k+1]%2==0 && v[k+2]%2!=0)
        {
            r++;
        }
    }
    printf("%d",r);
}