#include<stdio.h>
int main()
{
    int n,rem,rev=0,rap;
    scanf("%d",&n);
    rap=n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rap==rev)
    {
      printf("Palindrome");
    }
    else
    {
      printf("Not Palindrome");
    }
}