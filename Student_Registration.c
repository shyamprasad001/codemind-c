#include<stdio.h>
int main()
{
    int i,a,n,m,k;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
      scanf("%d%d%d",&n,&m,&k);
      if((m-k)/n)
      {
      printf("YES
");
      }
      else 
      {
      printf("NO
");
      }
    }  
}