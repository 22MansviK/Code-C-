#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Kamble");
    q.push("Vivekanand");
    q.push("Mansvi");

    cout<<"Top element -> "<<q.front()<<endl;
    q.pop();
    cout<<"Top element -> "<<q.front()<<endl;

    return 0;

}