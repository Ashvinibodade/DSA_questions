#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr , int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
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

    selectionSort(v,n);


}