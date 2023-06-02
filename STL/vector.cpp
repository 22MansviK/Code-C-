#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    cout<<"Size -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Size -> "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Size -> "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Size -> "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"Size -> "<<v.capacity()<<endl;

    cout<<"Element at the first index -> "<<v.at(1)<<endl;

    cout<< "First element is -> "<< v.front()<<endl;
    cout<<"Last element is -> "<< v.back()<<endl;

    cout<<"Before pop --> "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    } cout<<endl;

    v.pop_back();

    
    cout<<"After pop --> "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    } cout<<endl;

    return 0;
}