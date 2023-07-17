#include<iostream>
#include<vector>
using namespace std;

/*
void bubbleSort(vector<int> &arr,int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
}

*/
void bubbleSort(vector<int>&arr, int n)
{
    for(int i=0;i<n;i++)
    {
        bool swapped=false;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
      cout<<arr[i]<<" ";
    }
}

int main()
{
    vector <int > v={1,26,3,43,15,6,7};
    int n=7;

    bubbleSort(v,n);


}