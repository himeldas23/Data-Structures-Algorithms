#include <bits/stdc++.h>

using namespace std;

struct Item
{
    int v;
    int w;
    float p;
};

bool compare(Item i1, Item i2)
{
    return (i1.p > i2.p);
}

float knapsack(Item items[], int sizeOfItems, int W)
{
    int i, j;
    float totalValue = 0, totalWeight = 0;

    for (i = 0; i < sizeOfItems; i++)
    {
        items[i].p = (float)items[i].v / items[i].w;
    }
    sort(items, items+sizeOfItems, compare);

    for(i=0; i<sizeOfItems; i++)
    {
        if(totalWeight + items[i].w<= W)
        {
            totalValue += items[i].v ;
            totalWeight += items[i].w;
        }
        else
        {
            int wt = W-totalWeight;
            totalValue += (wt * items[i].p);
            totalWeight += wt;
            break;
        }
    }
    cout << "Total weight in bag " << totalWeight<<endl;
    return totalValue;
}

int main()
{
    int N;
    cout<<"Enter Total items :"<<endl;
    cin>>N;
    struct Item items[N];

    for(int i = 0; i < N; i++)
    {
        cout << "Enter values and weight of "<< i+1 << " Item :"<<endl;
        cin >> items[i].v >> items[i].w;
    }

    cout << "Entered data \n";

        cout << "Values: ";

    for(int i = 0; i < N; i++)
    {
        cout << items[i].v << "\t";
    }

    cout << endl << "Weight: ";

    for (int i = 0; i < N; i++)
    {
        cout << items[i].w << "\t";
    }
    cout << endl;

    int W;
    cout<< "Enter Knapsack weight \n";
    cin >> W;

    float mxVal = knapsack(items, N, W);
    cout << "Max value for "<< W <<" weight is "<< mxVal << endl;
}
