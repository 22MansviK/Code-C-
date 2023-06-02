#include<iostream>
#include<set>
using namespace std;  

int main()
{
    set<int> s;

    s.insert(552);
    s.insert(562);
    s.insert(4645);
    s.insert(84);
    s.insert(542);
    s.insert(55782);
    s.insert(552254);
    s.insert(742);
    s.insert(671);
    s.insert(1545);

    for(auto i:s)
    {
        cout<<i<<endl;
    }
}