#include<iostream>
using namespace std;

int main()
{
    int arr[50];
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int lowest;
    int temp;

    for(int i=0;i<n-1;i++)
    {
        lowest=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[lowest]>arr[j])
                lowest=j;
            cout<<"\nLowest : "<<lowest<<endl;
        }
        temp=arr[lowest];
        arr[lowest]=arr[i];
        arr[i]=temp;
        for(int k=0;k<n;k++)
            cout<<arr[k]<<" ";
        cout<<endl;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
