#include<stdio.h>
int main()
{
    float x,y,loss_percentage;
    scanf("%f%f",&x,&y);
    loss_percentage=((x-y)/x)*100;
    printf("%.2f",loss_percentage);
}