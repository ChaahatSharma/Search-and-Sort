#include<iostream>
using namespace std;
int partition1(int[],int,int);

quick(int arr[],int s,int e)
{
    if(s<e)
    {
        int p=partition1(arr,s,e);
        quick(arr,s,p-1);
        quick(arr,p+1,e);
    }
}

int partition1(int arr[],int s,int e)
{
    int pivot=arr[e];
    int pindex=s;
    int temp;
    for(int i=s;i<e;i++)
    {
        if(arr[i]<=pivot)
        {
            temp=arr[pindex];
            arr[pindex]=arr[i];
            arr[i]=temp;
            pindex++;
        }
    }
    temp=arr[e];
    arr[e]=arr[pindex];
    arr[pindex]=temp;
    return pindex;
}

int main()
{
    int arr[5]={3,2,5,4,8};
    int s=0;
    int e=4;
    quick(arr,s,e);
    cout<<"\n\nSorted Array : ";
    for(int i=s;i<=e;i++)
        cout<<arr[i]<<" ";
}
