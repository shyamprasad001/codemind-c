#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        if(i+j==n+1 || i==j)
        {
            printf("%d",i);
        }
        else
        {
            printf(" ");
        }
        printf("
");
    }
}