#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,cou=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cou=cou+1;
        }
    }
    if(cou==2)
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
}