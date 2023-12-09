#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f",&a,&b,&c);
    d=a*((pow((1+b/100),c)));
    e=d-a;
    printf("%.2f",e);
}