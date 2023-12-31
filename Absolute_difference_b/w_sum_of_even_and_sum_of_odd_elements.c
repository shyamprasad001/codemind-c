#include<stdio.h>
#include<math.h>
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
        if(v[k]%2!=0)
        {
            l+=v[k];
        }
        else
        {
            m+=v[k];
        }
    }
    printf("%d",abs(m-l));
}