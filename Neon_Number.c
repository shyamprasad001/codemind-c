#include<stdio.h>
int main()
{
    int n,i,r,sum=0,rap,m;
    scanf("%d",&n);
    rap=n;
    m=n*n;
    while(m!=0)
    {
        r=m%10;
        sum=sum+r;
        m=m/10;
        
    }
    if(rap==sum){
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
    
}