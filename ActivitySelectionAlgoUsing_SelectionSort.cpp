#include <bits/stdc++.h>

using namespace std;

struct Activity
{
    int Starttime,Endtime;
};

int main()
{
    int n;
    cout <<"Please Enter The Number Of Items: " <<endl;
    cin >>n;

    Activity arr[n];
    for (int i=0; i<n; i++)
    {
        cout << "Please Enter the Starttime and Endtime: "<<endl;
        cin >> arr[i].Starttime>>arr[i].Endtime;
    }

    for(int i=0; i<n; i++)
    {
        int min =i;
        for (int j= i+1; j<n; j++)
        {
            if (arr[j].Endtime<arr[min].Endtime)
                min =j;
        }
        swap (arr[i], arr[min]);
    }


    int i=0;
    cout << "Start Time: " << arr[i].Starttime << " End Time: " << arr[i].Endtime << endl;

    for (int j=1; j<n; j++)
    {
        if (arr[j].Starttime>= arr[i].Endtime)
        {
            cout <<"Start Time: "<<arr[j].Starttime<<" End Time: "<<arr[j].Endtime<<endl;
            i=j;
        }

    }
}
