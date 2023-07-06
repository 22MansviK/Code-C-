#include<iostream>
using namespace std;

bool IsPrime(int num)
{
    if(num == 2)
    {
        cout<<"NUmber is Prime "<<endl;
            return 1;
    }
    if(num == 1)
    {
        cout<<"NUmber is not Prime "<<endl;
        return 0;
    }
    for(int i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            cout<<"NUmber is not Prime "<<endl;
            return 0;
        }
        else{
            cout<<"NUmber is Prime "<<endl;
            return 1;
        }
    }
}
int main()
{
    int n;
    cin>>n;

    int result = IsPrime(n);

    return 0;
}