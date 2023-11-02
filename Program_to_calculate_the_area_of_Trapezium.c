#include<stdio.h>
#include<math.h>
int main()
{
    float b1,b2,h,area;
    scanf("%f%f%f",&b1,&b2,&h);
    area=0.5*(b1+b2)*h;
    printf("%0.4f",area);
}