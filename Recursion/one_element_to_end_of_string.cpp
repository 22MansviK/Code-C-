// Move one element to the end of the string 
// example "axxbdxcefxhix" to "abdcefhixxxxx"
#include<string>
#include<iostream>
using namespace std;

string moveallX(string s)
{
    if(s.length()==0)
    {
        return" ";
    }
    char ch=s[0];
    string ans = moveallX(s.substr(1));
    if(ch=='x')
    {
        return ans+ch;
    }
}
int main()
{
    cout<<moveallX("axxbdxcefxhix");
    return 0;
}