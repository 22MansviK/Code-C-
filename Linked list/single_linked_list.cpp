#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next;

    // constructor
    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};

void deleteNode(int position, node*&head)
{
    // deleting first or start node
    if(position==1)
    {
        node*temp = head;
        head = head-> next;
        // memory free start node
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        node*curr = head;
        node*prev = NULL;

        int cnt = 1;
        

    }
}

void insertathead(node*&head, int d)
{
    // new node create
    node*temp = new node(d);
    temp -> next = head;
    head = temp;
}

void insertattail(node*&tail, int d)
{
    node*temp = new node(d);
    tail -> next = temp;
    tail = tail -> next;
}

void insertatposition(node*&head, int position, int d)
{
    if(position ==1)
    {
        insertathead(head, d);
    }
    node*temp = head;
    int cnt = 1;
    while(cnt<position-1)
    {
        temp = temp -> next;
        cnt++;
    }
    // creating node for d
    node*nodetoinsert = new node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;
}

// traverse linked list
void print(node*&head)
{
    node*temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<< endl;
}

int main()
{
    node* node1 = new node(10);
    cout << node1 -> data << endl;
    cout << node1 -> next << endl;
    
    node*head = node1;
    print(tail);

    insertathead(tail, 12);

    print(tail);

    insertathead(head, 15);

    print(head);

    return 0;
}