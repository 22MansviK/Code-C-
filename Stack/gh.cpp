#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string nonrepeating(string s)
{
    for(int i=0; i<s.length(); i++)
    {
        for(int j=1; j<s.length(); j++)
        {
            if(s[i]==s[j])
            {   
                break;
                return -1;
            }
            else
            {
                cout<<i<<endl;
            }
        }
        break;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin,s);
    cout<<nonrepeating(string s)<<endl;   
    return 0;
}