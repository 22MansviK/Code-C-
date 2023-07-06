#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the number of rows and columns: ";
    cin>>row;
  

    for(int i=row; i>=0; i--)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<"*"<<' ';
        }
        cout<<endl;
    }
    int a,b;
    a= 1;
    b = 4;
 cout<<	(b ^ a);
    return 0;
}