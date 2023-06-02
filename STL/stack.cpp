#include<iostream>
#include<stack>
using namespace std;

int main()
{   
    stack<string> s;
    s.push("Kamble");
    s.push("Vivekanand");
    s.push("Mansvi");

    cout<<"Top element -> "<<s.top()<<endl;
    s.pop();
    cout<<"Top element -> "<<s.top()<<endl;

    return 0;
}