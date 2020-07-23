#include<iostream>
using namespace std;




int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int pindex=l;
    int qtemp;
    for(int i=l;i<r;i++)
    {
        if(arr[i]<=pivot)
        {
            qtemp=arr[pindex];
            arr[pindex]=arr[i];
            arr[i]=qtemp;
            pindex++;
        }

    }
        qtemp=arr[pindex];
        arr[pindex]=arr[r];
        arr[r]=qtemp;
        return pindex;
}
void quick(int arr[],int l,int r)
{
    if(l<r)
    {
        int p=partition(arr,l,r);
        quick(arr,l,p-1);
        quick(arr,p+1,r);
    }
}

void merge(int arr[],int l,int mid,int r)
{
    int i=l;
    int j=mid+1;
    int k=l;
    int temp[5];

    while(i<=mid && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            k++;i++;
        }
        else
        {
            temp[k]=arr[j];
            k++;j++;
        }
    }
    while(i<=mid)
    {
        temp[k]=arr[i];
        k++;i++;
    }
    while(j<=r)
    {
        temp[k]=arr[j];
        k++;j++;
    }
    for(int p=0;p<=r;p++)
        arr[p]=temp[p];

}

void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
    }
}
int main()
{
    int arr[5]={64,25,12,22,11};
    int n=5;
    int temp;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
                min=j;
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
    cout<<"\nSelection Sort : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"\nInsertion Sort : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
     cout<<"\nBubble Sort : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    int l=0;
    int r=4;
    mergesort(arr,l,r);

    cout<<"\nMerge Sort : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    quick(arr,l,r);

    cout<<"\nQuick Sort : ";
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;


}
