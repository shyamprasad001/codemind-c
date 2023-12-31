#include<stdio.h>
#include<math.h>
int main()
{
    int r,n,num1,c=0;
    scanf("%d",&n);
    num1=n;
    while(num1!=0)
    {
        num1=num1/10;
        c=c+1;
    }
    num1=n;
    int sum=0;
    while(num1!=0)
    {
        r=num1%10;
        sum=sum+pow(r,c);
        num1=num1/10;
        c=c-1;
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}