#include<stdio.h>
int main()
{
    int r,v[2004],k,l=0,m=0;
    scanf("%d",&r);
    for(k=0;k<r;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=0;k<r;k++)
    {

            l+=v[k];
    }
    printf("%d",l);
}