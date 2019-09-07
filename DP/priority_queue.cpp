////..............MIN_PRIORITY_QUEUE................/////

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    int priority;

    Node *next;
};

Node* newNode(int d, int prio)
{
    Node *temp;
    temp = new Node;

    temp->data = d;
    temp->priority = prio;
    temp->next = NULL;

    return temp;
}

void push(Node **head, int d, int prio)
{
    Node *temp, *start= *head;

    temp = newNode(d, prio);

    if ((*head)->priority > prio)
    {
        temp->next = *head;
        *head = temp;
    }

    else
    {
        while ( start->next !=NULL && start->next->priority < prio )
            start = start->next;

        temp->next = start->next;
        start->next = temp;
    }
}

void pop(Node **head)
{
    *head = (*head)->next;
}

int peek(Node **head)
{
    int data;
    data = (*head)->data;

    return data;
}

int Empty(Node **head)
{
    return (*head == NULL);
}

int main()
{
    int d,prio,n,t;
    Node *p;

    cout<<"Enter no. of nodes:\n";
    cin>>n;

    cout<<"Enter data and priority of nodes:\n";
    cin>>d>>prio;
    p = newNode(d, prio);
    
    t=n;
    t--;
    while(t--)
    {
        cin>>d>>prio;
         push(&p, d, prio);
    }
    cout<<"\n";
    pop(&p);
    pop(&p);

    cout<<"First Element in Queue -> "<<peek(&p)<<"\n";

    while(!Empty(&p))
        pop(&p);

    return 0;
}