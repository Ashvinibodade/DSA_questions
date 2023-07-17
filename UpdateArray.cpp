#include<iostream>
using namespace std;

void UpdateArray(int arr[],int size)
{
    cout<<"Inside the function"<<endl;
    arr[0]=120;

    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Going back to main function"<<endl;
}

int main()
{
    int arr[3]={1,2,3};

    UpdateArray(arr,3);

    cout<<endl<<"Printing in main func...";

    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}