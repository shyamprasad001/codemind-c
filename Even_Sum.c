#include<stdio.h>
int main()
{
    int i,n,sum=0;
    int arr[n];
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<=n;i++)
    if(arr[i]%2==0){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    
    
}