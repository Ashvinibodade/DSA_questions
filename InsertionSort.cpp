#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int>&arr ,int n)
{
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;

        for(;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }
        }
        arr[j+1]=temp;
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

    insertionSort(v,n);
}