#include<stdio.h>
int main()
{
	int v[2004],k,r,l,m=0;
	scanf("%d",&l);	
	for(k=0;k<l;k++)
	{
		scanf("%d ",&v[k]);
	}
	scanf("%d",&r);
	for(k=0;k<l;k++)
	{
		if(v[k]==r)
		{
			m++;
			break;
		}
	}
	if(m==1)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}