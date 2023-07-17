#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    char count='A';
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<count<<" ";
            count=char(count+1);
            j++;
        }
        cout<<endl;
        i++;
    }

    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //     {
    //         cout<<count<<" ";
    //         count=char(count+1);
    //     }
    //     cout<<endl;
    // }
}