#include<iostream>
using namespace std;

int getmax(int arr[],int si)
{
    int maxdig=arr[0];
    for(int i=1;i<si;i++)
    {
        if(arr[i]>maxdig)
            maxdig=arr[i];
    }
    return maxdig;
}

void countsort(int arr[],int si,int div)
{
    int output[si];
    int range=10;
    int countarr[range]={0};

    for(int i=0;i<si;i++)
        countarr[(arr[i]/div)%10]++;
    for(int i=1;i<range;i++)
        countarr[i]+=countarr[i-1];
    for(int i=si-1;i>=0;i--)
    {
        output[countarr[(arr[i]/div)%10]-1]=arr[i];
        countarr[(arr[i]/div)%10]--;

    }
    for(int i=0;i<si;i++)
        arr[i]=output[i];
}

void radix(int arr[],int si)
{
    int m=getmax(arr,si);
    for(int div=1;m/div>0;div*=10)
        countsort(arr,si,div);
}

int mian()
{
    int arr[8]={170,45,75,90,802,24,2,66};
    int si=8;
    radix(arr,si);
    for(int i=0;i<si;i++)
        cout<<"\n Sorted : "<<arr[i]<<" ";
}
