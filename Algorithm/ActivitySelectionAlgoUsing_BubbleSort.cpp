#include <bits/stdc++.h>

using namespace std;

struct Activity
{
    int Starttime,Endtime;
};

bool sortEndtime (Activity act1, Activity act2)
{
    return (act1.Endtime<act2.Endtime);
}

int main()
{
    int n;
    cout << "Please Enter The Number Of Items: "<<endl;
    cin >> n;

    Activity arr[n];
    for (int i=0; i<n; i++)
    {
        cout << "Please Enter the Starttime and Endtime: "<< endl;
        cin >> arr[i].Starttime >> arr[i].Endtime;
    }

    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[j].Endtime < arr[i].Endtime)
            {
                swap(arr[i],arr[j]);
            }
        }
    }

        int i=0;
        cout <<"Start Time: "<<arr[i].Starttime<<" End Time: "<<arr[i].Endtime<<endl;


        for (int j=1; j<n; j++)
        {
            if ( arr[j].Starttime>= arr[i].Endtime)
            {
                cout <<"Start Time: " << arr[j].Starttime << " End Time: " << arr[j].Endtime <<endl;
                i=j;
            }

        }


    }

