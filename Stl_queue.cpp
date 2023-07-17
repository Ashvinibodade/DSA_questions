#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;

    q.push("Ashvini");
    q.push("Nilesh");
    q.push("BFF");

    cout<<"Size before pop:"<<q.size()<<endl;
    cout<<"First element :"<<q.front()<<endl;

    q.pop();

    cout<<"First element :"<<q.front()<<endl;
    cout<<"Size before pop:"<<q.size()<<endl;
}