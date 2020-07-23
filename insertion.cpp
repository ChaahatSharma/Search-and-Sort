
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

    int k=0;
    int j=0;

    for(int i=1;i<n;i++)
    {
        k=arr[i];
        j=i-1;

        while(j>=0 && arr[j]>k)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=k;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
