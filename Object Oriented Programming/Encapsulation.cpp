#include<iostream>
using namespace std;
class MyClass
{
    private:
    int myNum;        // Attribute (int variable)
    string myString;

    public:
    int get_myNum()
    {
        return this->myNum;
    }

};

int main()
{
    MyClass Mansvi;

    cout<<"Class created"<<endl;
    
    return 0;
}