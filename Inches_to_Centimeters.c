#include<stdio.h>
int main()
{
    double inches,centimeters;
    scanf("%lf",&inches);
    centimeters=inches*2.54;
    printf("%.2lf",centimeters);
}