#include <stdio.h>
int main()
{
    int n,cnt=0,ans=0,mark=0;
    double x,y;
    scanf("%d%lf%lf",&n,&x,&y);
    double arr[n+10];
    for(int i=0; i<n; i++)
    {
        double a,b;
        scanf("%lf%lf",&a,&b);
        if(x==a && mark==0)
        {
            ans++;
            mark=1;
        }
        else if(x==a)
        {
            continue;
        }
        else
        {
            double d=(b-y)/(a-x);
            arr[cnt++]=d;
        }
    }
    for(int i=0; i<cnt; i++)
    {
        for(int j=i+1; j<cnt; j++)
        {
            if(arr[j]<arr[i])
            {
                double temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    if(cnt==0)
    {
        printf("%d\n",ans);
    }
    else
    {
        x=arr[0];
        ans++;
        for(int i=1; i<cnt; i++)
        {
            if(arr[i]==x)
            {
                continue;
            }
            else
            {
                ans++;
                x=arr[i];
            }
        }
        printf("%d\n",ans);
    }
}
