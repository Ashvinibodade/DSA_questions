#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1]="Ashvini";
    m[2]="Neilesh";
    m[3]="formality";

    // m.insert(5,"khusbu");

    cout<<"before erase"<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<"find 13:" << m.count(13)<<endl;

    // m.erase();

    cout<<"After erase"<<endl;

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<endl;

    auto it=m.find(5);

    for(auto i=it;i!=m.end();i++)
    {
        cout<<(*i).first<<endl;
    }


}