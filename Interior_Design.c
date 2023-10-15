#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2,A,B;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    A=X1+Y1;
    B=X2+Y2;
    if(A<B)
    {
        printf("%d",A);
    }
    else if(A>B)
    {
        printf("%d",B);
    }
    else 
    {
        printf("%d",A);
    }
    
}