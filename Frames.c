#include<stdio.h>
int main()
{
    float l,w,x;
    scanf("%f%f%f",&l,&w,&x);
    float perimeter=2*(l+w);
    float cost=perimeter*x;
    printf("%.0f",cost);
}