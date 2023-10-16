#include<stdio.h>
int main()
{
    float H;
    scanf("%f",&H);
    if(H<150.0)
    {
        printf("The person is Dwarf.");
    }
     else if(H>150.0 && H<=165.0)
    {
        printf("The person is average heighted.");
    }
    else if(H>165.0 && H<=195.0)
    {
        printf("The person is taller.");
    }
    else if(H>195.0)
    {
        printf("Abnormal height.");
    }
}