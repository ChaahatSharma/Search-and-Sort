#include<iostream>
using namespace std;

int main()
{

    int arr[]={5,4,1,2,3};
    int n=sizeof(arr)/sizeof(int);
    int temp;

    for(int i=0;i<n-1;i++)
    {
        bool flag=false;
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                flag=true;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        if(flag==false)
        {
            cout<<endl;
            break;
        }
        cout<<"\n"<<i<<endl;
        for(int k=0;k<n;k++)
        {
            cout<<arr[k]<<" ";
        }

    }
    cout<<"\nFINAL : ";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
