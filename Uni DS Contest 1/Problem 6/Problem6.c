#include <stdio.h>

int main()
{
    int t,m,i;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {

        scanf("%d",&m);
        if(m>=80 && m<=100)
        {
            printf("Case %d: A+\n",i);
        }
        else if(m>=75 && m<=79)
        {
            printf("Case %d: A\n",i);
        }
        else if(m>=70 && m<=74)
        {
            printf("Case %d: A-\n",i);
        }
        else if(m>=65 && m<=69)
        {
            printf("Case %d: B+\n",i);
        }
        else if(m>=60 && m<=64)
        {
            printf("Case %d: B\n",i);
        }
        if(m>=55 && m<=59)
        {
            printf("Case %d: B-\n",i);
        }
        else if(m>=50 && m<=54)
        {
            printf("Case %d: C\n",i);
        }
        else if(m>=45 && m<=49)
        {
            printf("Case %d: D\n",i);
        }
        else if(m>=0 && m<=44) {
            printf("Case %d: F\n",i);
        }

    }

    return 0;
}





