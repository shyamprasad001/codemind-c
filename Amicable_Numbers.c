#include<stdio.h>
int main()
{
    int n,m,i,sum1=0,sum2=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<n;i++){
        if(n%i==0){
            sum1=sum1+i;
        }
    }
    for(i=1;i<m;i++){
        if(m%i==0){
            sum2=sum2+i;
        }
    }
    if((n==sum2)&&(m==sum1)){
        printf("Amicable");
    }
    else
    {
        printf("Not Amicable");
    }
    
}