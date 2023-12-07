#include<stdio.h>
#include<math.h>
int main()
{
    double s1,s2,h;
    scanf("%lf%lf",&s1,&s2);
    h=sqrt(s1*s1+s2*s2);
    printf("%.2lf",h);
}