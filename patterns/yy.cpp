#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <cstdio>
using namespace std;
void print(vector <int> &a) {
   

   for(int i=0; i < a.size(); i++)
   std::cout << a.at(i) << ' ';
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> v;
    int n;
    cin>>n;
    int a;
    for(int i=0 ; i<n; i++)
    {
        cin>>a;
        v.push_back(a);
    }
    
    //print(v);
    sort(v.begin(),v.end());
    //print(v);
    for(auto &p : v)
    {
        cout<<p<<" ";
    }
    cout<<endl;
    return 0;
}