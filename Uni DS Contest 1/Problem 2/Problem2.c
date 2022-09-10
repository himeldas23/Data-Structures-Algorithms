#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    float sum=0;
    int arr[n+10];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum = sum + arr[i];
    }
    printf("%f",sum/n);

    return 0;
}





