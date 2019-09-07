
#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int key;
    Node *lptr, *rptr;
};

Node* newNode(int key)
{
    Node *temp;
    temp = new Node;
    temp->key = key;
    temp->lptr = NULL;
    temp->rptr = NULL;

    return temp;
}

Node* insert(Node *node, int key)
{
    if (node==NULL)
        return newNode( key );

    else if(node->key < key)
        node->rptr = insert(node->rptr, key);
    else
        node->lptr = insert(node->lptr, key);

    return node;
}

void inorder(Node *root)
{
    if (root != NULL)
    {
        inorder(root->lptr); 
        cout<<root->key<<" "; 
        inorder(root->rptr); 
    } 
}

Node* search (Node *node, int item)
{
    if (node == NULL)
    {
        cout<<"Not found\n";
        return node;
    }    

    else if (node->key == item)
    {
         cout<<"Item present\n";
         return node;
    }
           

    else if ( node->key > item)
        return search(node->lptr, item);

    else
        return search(node->rptr, item);
}

int main()
{
    int n, i;
    cout<<"Enter size of tree: ";
    cin>>n;

    int a[n];
    for(i=0; i<n; i++)
        cin>>a[i];

    Node *root = newNode(a[0]);
    
    for (i=1;i <n; i++)
    {
        insert(root, a[i]);
    }

    inorder(root);
    cout<<"\n";

    search(root,80);
    search(root,30);
    search(root,10);
    search(root,60);
    search(root,70);
    search(root,20);


    return 0;
}