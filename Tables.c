#include<stdio.h>
int main()
{
    int n,i,s;
    scanf("%d",&n);
    scanf("%d",&s);
    for(i=1;i<=s;i=i+2)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}