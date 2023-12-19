#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d",&a,&b);
    
    for(c=a+1;c<b;c++)
    {
        int d=c*c;
        int e=c*c*c;
        printf("%d %d %d",c,d,e);
        printf("
");
    }
    
    
}