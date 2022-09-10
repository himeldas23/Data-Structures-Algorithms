#include <stdio.h>

int main()
{
    int n,k,i,c=0;
    scanf("%d%d",&n,&k);
    int arr[n+1];
    arr[0]=0;
    for(i=1; i<=n; i++)
    {
        arr[i]=i;
        arr[i]=arr[i]*5;
    }
    int ch=k;
    for(i=1; i<=n; i++)
    {
        if(ch<=240)
        {
            ch+=arr[i];
            if(ch>240)
            {
                break;
            }
            c++;
        }
    }
    printf("%d\n",c);
    return 0;
}





