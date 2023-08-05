#include<iostream>
using namespace std;

int main()
{
    struct a;
    {
       signed var1 = 5;
       signed var2 = 4;
    };
    cout<<sizeof(struct a)<<endl;
    cout<<sizeof(struct a obj)<<endl;
    return 0;
}