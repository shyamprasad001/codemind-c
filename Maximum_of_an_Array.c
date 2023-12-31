#include<stdio.h>
int main()
{
	int v[2004],k,l,r;
	scanf("%d",&l);	
	for(k=0;k<l;k++)
	{
		scanf("%d ",&v[k]);
	}
	r=v[0];
	for(k=0;k<l;k++)
	{
		if(v[k]>=r)
		{
		    r=v[k];
		}
	}
	printf("%d",r);
	return 0;
}