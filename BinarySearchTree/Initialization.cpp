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

void preorder( Node*root)
{
    if(NULL==root)
    {
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);

}

void inorder(Node*root)
{
    if(NULL==root)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void postorder( Node*root)
{
    if(NULL==root)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}



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

void takeinput(Node* &root)
{
    int data;
    cin>>data;
    while(data != -1)
    {
        root = insertIntoBST(root, data);
        cin>>data;
    }

}

Node* minValue(Node* root)
{
    Node* temp = root;
    while(temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node* maxVal(Node* root)
{
    Node* temp = root;
    while(temp->right != NULL)
    {
        temp = temp->right;
    }
    return temp;
}

Node* DeletefromBST(Node* root, int val)
{
    // base case
    if(root == NULL)
    {
        return root;
    }
    // 0 child
    if(root->left == NULL && root->right ==NULL)
    {
        delete root;
        return NULL;
    }
    // 1 child
    // left child
    if(root->left != NULL && root->right ==NULL)
    {
        Node* temp = root->left;
        delete root;
        return temp;
    }
    // right child
    if(root->left == NULL && root->right !=NULL)
    {
        Node* temp = root->right;
        delete root;
        return temp;
    }

    // 2 child
    if(root->left != NULL && root->right !=NULL)
    {
        int mini = minValue(root->right) -> data;
        root->data = mini;
        root->right = DeletefromBST(root->right, mini);
        return root;
    }

    else if(root->data > val)
    {
        // left madhe jayach aahe
        root->left == DeletefromBST(root->left, val);
        return root;
    }
    else
    {
        // right madhe jayach aahe
        root->right == DeletefromBST(root->right, val);
        return root;
    }
}

int main()
{
    Node* root = NULL;
    takeinput(root);

    cout<<"print preorder"<<endl;
    inorder(root);
    return 0;
}
