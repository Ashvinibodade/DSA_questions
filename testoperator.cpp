#include<iostream>
using namespace std;

int main()
{
    int a=3;
    int b=4;

    cout<<"& operator testing:"<<(a&b)<<endl;
    cout<<"| operator testing:"<<(a|b)<<endl;
    cout<<"~ operator testing:"<<~a<<endl;
    cout<<"^ operator testing:"<<(a^b)<<endl;
}