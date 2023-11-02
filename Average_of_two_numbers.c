#include<stdio.h>
int main()
{
    int a,b;
    float c;
    scanf("%d%d",&a,&b);
    c=float(a+b)/2;
    printf("Average of %d and %d is: %.2f",a,b,c);
}