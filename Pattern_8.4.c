#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        if(i+j==n+1 || i==j)
        {
            printf("%c",i+64);
        }
        else
        {
            printf(" ");
        }
        printf("
");
    }
}