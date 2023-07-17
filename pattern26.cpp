#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
   for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
        int star1=n-i;
        while(star1)
        {
            cout<<"*";
            star1--;
        }
        int star2=n-i;
        while(star2)
        {
            cout<<"*";
            star2--;
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}