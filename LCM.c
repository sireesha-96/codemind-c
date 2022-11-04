#include<stdio.h>
int main()
{
    int a,b,lcm=0,max=0,i;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>b)
     max=a;
    else
     max=b;
    for(i=max; ;i++)
    {
        if(i%a==0&&i%b==0)
        {
            lcm=i;
            break;
        }
    }
    printf("%d",lcm);
}