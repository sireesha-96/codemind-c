#include<stdio.h>
int main()
{
    int n1,s1,s2,res1=0,res2=0,r1,r2;
    scanf("%d",&n1);
    s1=n1*n1;
    while(n1>0)
    {
        r1=n1%10;
        res1=res1*10+r1;
        n1=n1/10;
    }
    s2=res1*res1;
    while(s2>0)
    {
        r2=s2%10;
        res2=res2*10+r2;
        s2=s2/10;
    }
    if(s1==res2)
     printf("True");
    else
     printf("False");
}