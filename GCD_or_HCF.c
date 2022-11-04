#include<stdio.h>
int main()
{
    int a,b,gcd=0,min=0,i;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a<b)
     min=a;
    else
     min=b;
    for(i=min;i>0;i--)
    {
        if(a%i==0&&b%i==0)
        {
            gcd=i;
            break;
        }
    }
    printf("%d",gcd);
}