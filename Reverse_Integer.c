#include<stdio.h>
int main()
{
    int n,t,res=0;
    scanf("%d",&n);
    while(n!=0)
    {
    t=n%10;
    res=res*10+t;
    n=n/10;
    }
    printf("%d",res);
}