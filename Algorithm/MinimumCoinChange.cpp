#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter the Numbers of Coin: " << endl;
    cin >> n;

    int amount;
    cout << "Enter the Amount of Coin: " << endl;
    cin >> amount;

    int coin[n];

    cout << "Enter the Coins:" << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }

    int arr[n+1][amount+1];

    for(int i=0; i<=n; i++)
    {
        arr[i][0]=0;
    }

    for(int j=0; j<=amount; j++)
    {
        arr[0][j]=amount + 1;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=amount; j++)
        {

            if(j >= coin[i-1])
            {
                arr[i][j] = min(arr[i-1][j],1+arr[i][j-coin[i-1]]);
            }

            else
            {
                arr[i][j] = arr[i-1][j];

            }
        }
    }

    cout << "Minimum number of Coin Change : "<<endl;
    cout << arr[n][amount] <<endl;


}

