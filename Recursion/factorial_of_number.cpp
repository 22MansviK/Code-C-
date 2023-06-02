// Fint the factorial of number n
#include<iostream>
using namespace std;

int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int precFact = factorial(n-1);
    return n*precFact;
}
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;

    return 0;
}