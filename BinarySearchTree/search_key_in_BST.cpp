#include<iostream>
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;

    }
};

Node* insertIntoBST(Node* root, int d)
{
    if(root == NULL)
    {
        root = new Node(d);
        return root;
    }

    if(d > root -> data)
    {
        root->right = insertIntoBST(root->right, d);
 
    }
    else{
        root->left = insertIntoBST(root->left, d);

    }
    return root;

}

void takeinput(Node* root)
{
    int data;
    cin>>data;
    while(data != -1)
    {
        root = insertIntoBST(root, data);
        cin>>data;
    }

}

bool searchIntoBST(Node* root, int key)
{
    if(root == NULL)
    {
        return false;
    }
    if(key == root->data)
    { return true;
        }    
    if(key>root->data)
    {
        return searchIntoBST(root->right,key);
    }
    else{
        return searchIntoBST(root->left, key);
    }
       
}
    
    




int main()
{
    Node* root = NULL;
    takeinput(root);
    int key = 15;
    cout<<"print result";
    searchIntoBST(root, 15);

    
    return 0;
}

