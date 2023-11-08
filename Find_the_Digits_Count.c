#include<stdio.h>
int main()
{
    int n,r,i=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        i=i+1;
    }
    printf("%d",i);
}