#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(4);
    d.push_back(2);
    d.push_front(3);

    for(int i:d)
    {
        cout<<i<<" ";
    } cout<<endl;

    d.pop_back();

    
    for(int i:d)
    {
        cout<<i<<" ";
    } cout<<endl;

    cout<<d.at(1)<<endl;

    cout<< "First element is -> "<< d.front()<<endl;
    cout<<"Last element is -> "<< d.back()<<endl;

    cout<<"Show if deque is empty or not -> "<< d.empty()<<endl;
    cout<<"Size -> "<<d.size()<<endl;

    return 0;
}