#include<iostream>
using namespace std;

class node
{
    public:
    int info;
    node *link;

}*start;

void insert_node();
void delete_node( int );
void display();

int main()
{
    int x,t,n;
    cin>>t;

    while(t--)
    {
        start = NULL;
        cin>>n;
        while(n--)
        {    insert_node();
        }
        
        cin>>x;
        delete_node(x);
        
        display();
    }
    return 0;
}

void insert_node()
{
    int x;
    cin>>x;
    node *temp, *q; 

    temp = new(node);

    temp -> link = NULL;
    temp -> info = x;

    if(start == NULL)
        start = temp;
    
    else
    {
        q = start;

        while(q -> link != NULL)
            q = q -> link;
        q->link = temp;
    }
}

void delete_node(int x)
{
    node *q;
    q = start;
    if(start==NULL)
    {
        cout<<"list is empty\n";
    }

    else if(q->info == x)
    {
        start = q->link;
    }

    else
    {
        q = start;
        while((q->link)->info != x )
           q = q->link; 
        q->link = q->link->link;
    }
}

void display()
{
    node *q;

    q = start;
    if(q == NULL)
        cout<<"list is empty\n";
    
    else
    {
        while(q != NULL)
        {
            cout<<q->info<<" ";
            q = q->link;
        }
        cout<<"\n";
    }
    
}