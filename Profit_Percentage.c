#include<stdio.h>
int main()
{
    float X,Y;
    scanf("%f%f",&X,&Y);
    float Per;
    Per=(Y-X)/X*100;
    printf("%.2f",Per);
}