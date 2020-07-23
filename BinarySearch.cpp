#include<iostream>
using namespace std;

binary(int arr[],int left,int right,int x)
{
    int mid;
    mid=(left+right)/2;
    cout<<"\nRight : "<<right<<"  ";
    cout<<"Left : "<<left<<"  ";
    cout<<"Mid : "<<mid<<"  ";

    if(arr[mid]==x)
    {
        cout<<"\n\nElement found at position : "<<mid+1;
        cout<<" And at index : "<<mid<<" Element : "<<arr[mid];
    }
    else
    {
        if(arr[mid]>x)
            binary(arr,left,mid-1,x);
        else if(arr[mid]<x)
            binary(arr,mid+1,right,x);
    }
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int left=0;
    int right;
    int x;
    int sizeo=sizeof(arr)/sizeof(arr[0]);


    cout<<"Enter X : ";
    cin>>x;
    right=sizeo-1;
    binary(arr,left,right,x);
}
