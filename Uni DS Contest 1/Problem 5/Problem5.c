#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    for(int i=1; i<=x; i++)
    {
        int a,b,c,sum=0;
        scanf("%d %d %d",&a,&b,&c);
        sum=a+b+c;
        printf("Case %d: Sum of %d, %d and %d is %d\n",i,a,b,c,sum);
    }
}
