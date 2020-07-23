#include<iostream>

using namespace std;

linear(int arr[],int num)
{
    int temp=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==num)
        {
            cout<<"\nFound at : "<<i+1<<endl;
            temp++;
            break;
        }

    }
    if(temp==0)
        cout<<"\nNot found at : ";
}
int main()
{

    int arr[5];
    int num;
    cout<<"\nEnter the values of the array : ";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the number to be found ";
    cin>>num;

    linear(arr,num);
}
