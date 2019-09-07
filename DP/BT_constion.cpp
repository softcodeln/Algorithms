#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *lptr, *rptr;
};

Node* new_node(int info)
{
    Node *node = new(Node);
    node ->data=info;
    node ->lptr=NULL;
    node ->rptr=NULL;

    return node;
}

Node* tree_constion(int arr[], Node* root, int i, int n)
{
    if(i<n)
    {
        Node* temp = new_node(arr[i]);
        root = temp;

        root->lptr = tree_constion(arr,root->lptr,2*i+1,n);
        root->rptr = tree_constion(arr,root->rptr,2*i+2,n);
    }
    return root;
}

void inorder(Node * root)
{
    if(root !=NULL)
    {
        inorder(root->lptr);
        cout<<root->data<<" ";
        inorder(root->rptr);
    }
}

int main()
{
    Node *root;
    int i,n;
    cout<<"Enter number of nodes for your tree\n";
    cin>>n;
    int arr[n];

    for (i=0; i<n; i++)
        cin>>arr[i];

    root = tree_constion(arr,root,0,n);
    inorder(root);
    cout<<"Inorder of Original tree: ";
    cout<<"\n";

    return 0;
}