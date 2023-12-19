#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    
    for(c=1;c<=b;c++)
    {
        d=a*c;
        printf("%d x %d = %d",a,c,d);
        printf("
");
    }
}