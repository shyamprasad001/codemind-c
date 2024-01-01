#include<stdio.h>
int main()
{
    int n,m,i,cou=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
         if((i%2==0) && (i%3==0))
    
        cou=cou+1;
    }
    printf("%d",cou);
        
    
}