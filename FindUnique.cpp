#include<iostream>
using namespace std;

int findUnique(int arr[],int size)
{
    int ans=0;

    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[9]={5,6,8,9,7,7,8,5,9}  ;

    int ans=findUnique(arr,9);

    cout<<"Final answer:"<<endl;
    cout<<ans<<endl;
}