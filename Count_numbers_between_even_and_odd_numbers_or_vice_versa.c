#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if((a[i-1]%2!=0&&a[i+1]%2==0)||(a[i-1]%2==0&&a[i+1]%2!=0))
        {
            s=s+1;
        }
    }
    printf("%d",s);
}