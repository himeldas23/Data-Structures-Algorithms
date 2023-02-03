#include<bits/stdc++.h>
using namespace std;

struct item
{
    string name;
    float price, weight, unitprice;
};

bool sortItem (item i1, item i2)
{
    return (i1.unitprice> i2.unitprice);
}

int main()
{
    int n;
    cout<<"Enter The Number : "<<endl;
    cin>>n;

    float profit= 0;

    int capacity;
    cout<<"Enter The Capacity : "<<endl;
    cin>>capacity;

    item arr[n];

    for(int i=0; i<n; i++)
    {
        cout <<"Enter the item, price and weight : "<< endl;
        cin >>arr[i].name>> arr[i].price>> arr[i].weight;
        arr[i].unitprice = arr[i].price/arr[i].weight;
    }


    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[j].unitprice > arr[i].unitprice)
            {
                swap(arr[i],arr[j]);
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i].name<< "  " <<arr[i].price<< "  "<<arr[i].weight<< "  "<<arr[i].unitprice<<endl;
    }

    for( int i=0; i<n; i++)
    {
        if(arr[i].weight<= capacity)
        {
            profit+=arr[i].price;
            capacity -= arr[i].weight;
        }
        else
        {
            profit+= capacity* arr[i].unitprice;
            break;
        }
    }

    cout<<"Total profit: "<<profit<<endl;

}

