#include<iostream>
using namespace std;
void mergemain(int arr[],int l,int m,int r);

mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        mergemain(arr,l,m,r);
    }

}
void mergemain(int arr[],int l,int m,int r)
{
    int i=l,j=m+1,k=l;
    int temp[5];

    while(i<=m && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;k++;
        }
    }
    while(i<=m)
    {
        temp[k]=arr[i];
        i++;k++;
    }
    while(j<=r)
    {
        temp[k]=arr[j];
        j++;k++;
    }
    for(int p=l;p<=r;p++)
        arr[p]=temp[p];
}

int main()
{
int arr[5];
int l=0;
int r=4;

cout<<"\nEnter Elements : \n";

for(int i=0;i<5;i++)
    cin>>arr[i];
cout<<"\nBefore : ";
for(int i=0;i<5;i++)
    cout<<arr[i];

mergesort(arr,l,r);

cout<<"\nAfter : ";
for(int i=0;i<5;i++)
    cout<<arr[i];


}
