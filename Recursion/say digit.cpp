#include<iostream>
#include<vector>
using namespace std;
void Saydigit(int n, string a[])
{
    
    if(n==0)
    {
        return;
    }
    int digit = n%10;
    n = n/10;
    
    Saydigit(n, a);
    cout<<a[digit]<<" ";
    
}
int main()
{
    string a[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    Saydigit(n,a);
    return 0;
}
