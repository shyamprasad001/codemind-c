#include<stdio.h>
int main()
{
    int j,n,sum=0;
    int arr[n];
    scanf("%d",&n);
    for(j=0;j<=n;j++){
        scanf("%d",&arr[j]);
    }
    for(j=0;j<=n;j++)
    if(arr[j]%2==1){
        sum=sum+arr[j];
    }
    printf("%d",sum);
    
}