#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    if(n!=0)
    {
        for(i=1;i<=n;i++)
        {
            if(i%2!=0)
            {
                printf("%d ",i);
            }
        }
    }
}