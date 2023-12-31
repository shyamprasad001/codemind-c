#include<stdio.h>
int main()
{
    int i,num1,num2,fds=0,sds=0;
    scanf("%d%d",&num1,&num2);
    for(i=1;i<num1;i++)
    {
        if(num1%i==0)
        {
            fds=fds+i;
        }
    }
    for(i=1;i<num2;i++)
    {
       if(num2%i==0)
       {
           sds=sds+i;
       }
    }
    if((num1==sds) && (num2==fds))
    {
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
}