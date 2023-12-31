#include<stdio.h>
int ls(int *a,int r,int k)
{
	int i,v=0;
	for(i=0;i<r;i++)
	{
		if(k==a[i])
		{
		   v++;	
		}
	}
	return v;
}
int main()
{
	int a[2004],r,k,i;
	scanf("%d",&r);
	for(i=0;i<r;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&k);
	printf("%d",ls(a,r,k));
}