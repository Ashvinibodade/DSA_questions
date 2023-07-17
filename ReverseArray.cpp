#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
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
    int even[10]={5,7,-2,10,22,-2,0,5,22,1};
    int odd[5]={9,4,2,1,5};

    reverse(even,10);
    printArray(even,10);

    reverse(odd,5);
    printArray(odd,5);

}