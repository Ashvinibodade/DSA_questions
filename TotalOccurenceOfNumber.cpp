#include<iostream>
#include<vector>
using namespace std;

int firstOcc(vector<int> arr ,int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e= mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int lastOcc(vector<int> arr ,int n,int key)
{
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s= mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int TotalOcc(vector<int> arr ,int n,int key)
{
    int focc=firstOcc( arr ,n,key);
    int locc=lastOcc( arr , n,key);

    int total_no_of_occ=locc-focc+1;

    return total_no_of_occ;
}

int main()
{
    vector<int> arr={1,2,3,3,3,3,5};

    int size=7;

    int ans=TotalOcc(arr,size,3);
    cout<<ans;

}