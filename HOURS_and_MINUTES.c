#include<stdio.h>
int main()
{
    int hr,min;
    scanf("%d",&min);
    hr=min/60;
    min=min%60;
    printf("%d Hour(s) %d Minute(s)",hr,min);
}