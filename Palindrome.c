#include<stdio.h>
int main()
{
    int n,r,res=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        res=res*10+r;
        n=n/10;
    }
    if(temp==res)
     printf("True");
    else
     printf("False");
}