#include<iostream>
using namespace std;

void swapAlternate(int arr[],int n)
{
    for(int i=0;i<n;i+=2)
    {
        if(i+1<n)
        {
            swap(arr[i],arr[i+1]);
        }
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

    swapAlternate(even,10);
    printArray(even,10);

    cout<<endl;

    swapAlternate(odd,5);
    printArray(odd,5);

}