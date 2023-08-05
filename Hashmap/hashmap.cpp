#include <iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string,int> m;
    pair<string,int> p = make_pair("Mansvi",22);
    m.insert(p);
    
    pair<string,int> pair1("Vivekanand",19);
    
    m["kamble"] = 3;
    
    cout<<m["Kamble"]<<endl;

    return 0;
}