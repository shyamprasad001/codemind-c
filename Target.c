#include<stdio.h>
int main()
{
    int p1,p2,p3,p4,tot;
    scanf("%d%d%d%d",&p1,&p2,&p3,&p4);
    tot=p1+p2+p3+p4;
    if(p1>9 && p2>9 && p3>9 && p4>9)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}