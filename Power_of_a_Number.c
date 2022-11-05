#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m;
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&m);
    int s=pow(x,y);
    int d=s%m;
    printf("%d",d);
}