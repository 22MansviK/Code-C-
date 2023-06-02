// replace pi with 3.14 in string 
#include<iostream>
#include<string>
using namespace std;

void replacePi(string s)
{
    if(s.length()==0) // base case
    {
        return;
    }
    if(s[0]=='A' && s[1]=='i')
    {
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
int main()
{
    replacePi("pippxxppiixipi");
    return 0;
}