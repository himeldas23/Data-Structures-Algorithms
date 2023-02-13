#include<bits/stdc++.h>
using namespace std;
int main()
{

    string s1,s2;
    cout << "Enter Two Strings: " << endl;
    cin >> s1 >> s2;

    int n = s1.size();
    int m = s2.size();

    int arr[n+1][m+1];
    char tracker[n+1][m+1];

    for(int i=0; i<=n; i++)
    {
        arr[i][0]=0;
    }

    for(int j=0; j<=m; j++)
    {
        arr[0][j]=0;
    }


    for(int i=1; i<=n; i++)
    {

        for(int j=1; j<=m; j++)
        {
            if(s1[i-1] == s2[j-1])
            {

                arr[i][j] = arr[i-1][j-1] + 1;
                tracker[i][j] = 'D';


            }
            else
            {
                if(arr[i-1][j] >= arr[i][j-1])
                {
                    arr[i][j] = arr[i-1][j];
                    tracker[i][j] = 'U';
                }

                else
                {
                    arr[i][j] = arr[i][j-1];
                    tracker[i][j] = 'L';

                }

            }

        }
    }

    cout << "The Maximum Length of Subsequence is : "<<endl;
    cout << arr[n][m] <<endl;

    for(int i=1; i<n; i++)
    {

        for(int j=1; j<m; j++)
        {
            cout << tracker[i][j] << " ";
        }

        cout<<endl;
    }

    cout<<endl;

    int i=n,j=m;

    vector<char>v;

    while(i>0 && j>0)
    {

        if(tracker[i][j] == 'D')
        {
            v.push_back(s1[i-1]);
            i--;
            j--;

        }

        else if(tracker[i][j] == 'U')
        {
            i--;
        }

        else
        {
            j--;
        }

    }


    reverse(v.begin(),v.end());


    cout<<"The Common Longest Subsequence Are: "<<endl;
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }







}
