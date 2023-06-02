#include<iostream>
#include<queuee>
using namespace std;

class node
{
    public:
    node()
    {
    int data;
    node* next;
    }

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
    node* front;
    node* back;
    public:
    queue()
    {
        front = NULL;
        back = NULL;
        }
};

int push(int x)
{
    node*n = new node(x);
    if(front==NULL)
    {
        front = n;
        back = n;
        return;
    }
    back->next = n;
    back = n;
}