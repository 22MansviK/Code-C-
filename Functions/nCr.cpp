#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int product = 1;
    while(n>0)
    {
        product = product*n;
        n = n-1;
    }
    return product;
}
int NCr(int n,int r)
{
    int numerator = factorial(n);
    int denominator = factorial(n-r)*factorial(r);

    
    float nCr = numerator/denominator;
    return nCr;
}
int main()
{
    //int num;
    //cin>>num;

    //int fac = factorial(num);
    //cout<<"num! = "<< fac<<endl;
    int n,r;
    cin>>n>>r;
    int nCr = NCr(n,r);
    cout<<"nCr = "<< nCr<<endl;

    return 0;
}