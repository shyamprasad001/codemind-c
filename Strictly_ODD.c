#include<stdio.h>
int main()
{
    int v[2004],n,k;
    scanf("%d",&n);
    for (k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    for (k=0;k<n;k++)
    {
        if (v[k]%2!=0)
        {
            if (k%2==0)
            {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}