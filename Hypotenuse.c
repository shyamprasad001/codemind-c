#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,h;
    scanf("%lf%lf",&a,&b);
    h=(a*a)+(b*b);
    printf("%.2lf",sqrt(h));
}