#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node*left;
    struct Node*right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;

    }
};

void preorder(struct Node*root)
{
    if(NULL==root)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(struct Node*root)
{
    if(NULL==root)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder(struct Node*root)
{
    if(NULL==root)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int search(int inorder[], int start, int end, int curr)
{
    for(int i=start; i<=end; i++)
    {
        if(inorder[i]==curr)
        {
            return i;
        }
    }
    return -1;
}

Node* Buildtree(int preorder[], int inorder[], int start, int end )
{
    static int idx = 1;
    if(start<end)
    {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node*node = new Node(curr);
    if(start==end)
    {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->left = Buildtree(preorder, inorder, start, pos-1);
    node->right = Buildtree(preorder, inorder, pos+1, end);

    return node;
}

int main()
{
    struct Node*root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    preorder(root);

    return 0;
}
 
 /*         1
           / \
          2   3
         / \ / \
        4  5 6  7      */