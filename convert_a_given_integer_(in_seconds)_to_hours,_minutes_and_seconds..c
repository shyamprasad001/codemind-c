#include<stdio.h>
int main()
{
    int s,H,M,S,n;
    scanf("%d",&s);
    
    H=s/3600;
    n=s%3600;
    M=n/60;
    S=n%60;
    
    printf("H:M:S-%d:%d:%d",H,M,S);
    
}