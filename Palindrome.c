#include<stdio.h>
int main()
{
    int n,i,rev=0,r,rap;
    scanf("%d",&n);
    rap=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }    
    if(rev==rap)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}