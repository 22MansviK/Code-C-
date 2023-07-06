#include<iostream>
using namespace std;

bool Iseven(int num)
{
    if(num & 1 == 1)
    {
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    int n;
    cin>>n;

    int ans = Iseven(n);
    cout<<ans<<endl;
    return 0;
}