#include<stdio.h>
#include<math.h>
int main()
{
    int x1,y1,x2,y2;
    float dis;
    scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
    dis=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%.4f",sqrt(dis));
}