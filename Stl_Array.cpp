#include<iostream>
#include<array>
using namespace std;

int main()
{
    //static or ormal array
    int basic[3]={1,2,3};

    //stl array
    array<int,4>a={1,2,3,4};

    int size=4;

    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;

    cout<<"Element at 2nd index:"<<a.at(2)<<endl;

    cout<<"Empty or not:"<<a.empty()<<endl;

    cout<<"First element:"<<a.front()<<endl;

    cout<<"Last element:"<<a.back()<<endl;

}