#include <bits/stdc++.h>

using namespace std;


struct Activity
{
    int start, finish;
};

bool Sort_activity(Activity s1, Activity s2)
{
    return (s1.finish< s2.finish);
}


void print_Max_Activities(Activity arr[], int n)
{
    sort(arr, arr+n, Sort_activity);

    cout<< "Following activities are selected \n";

    int i = 0;
    cout<< "(" <<arr[i].start<< ", " <<arr[i].finish << ")\n";

    for (int j = 1; j < n; j++)
    {

        if (arr[j].start>= arr[i].finish)
        {
            cout<< "(" <<arr[j].start<< ", "<<arr[j].finish << ") \n";
            i = j;
        }
    }
}

int main()
{
    int N;
    cout<< "Enter Total Activity: " <<endl;
    cin>>N;
    Activity arr[N];

    for(int i=0; i<=N-1; i++)
    {
        cout<<"Enter The Start and End Time of "<<i+1<<" Activity \n";
        cin>>arr[i].start>>arr[i].finish;
    }

    print_Max_Activities(arr, N);
    return 0;
}
