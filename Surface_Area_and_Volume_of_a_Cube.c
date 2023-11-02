#include<stdio.h>
int main()
{
    float a,Surface_area,Volume;
    scanf("%f",&a);
    Surface_area=6*(a*a);
    Volume=a*a*a;
    printf("Surface area = %.0f and Volume = %.0f",Surface_area,Volume);
}