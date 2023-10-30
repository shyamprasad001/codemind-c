#include<stdio.h>
int main()
{
    float x,y,profit,profit_percentage;
    scanf("%f%f",&x,&y);
    profit=y-x;
    profit_percentage=(profit/x)*100;
    printf("%.2f",profit_percentage);
}