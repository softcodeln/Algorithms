#include<bits/stdc++.h>
using namespace std;

class MinHeapNode
{
    public:

    char data;
    unsigned freq;
    MinHeapNode *left,*right;

    MinHeapNode(char data, unsigned freq)
    {
        left = NULL;
        right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

class compare
{
    public:
    bool operator()( MinHeapNode *l, MinHeapNode *r)
    {
        return ( l->freq > r->freq );
    }
};

void printCode(MinHeapNode *root, string str)
{
    if (!root)
        return;

    if (root->data != '$')
        cout<<root->data<<" : "<<str<<"\n";
    
    printCode(root->left, str + "0");
    printCode(root->right, str + "1");
}

void huffmancoding(char data[], int freq[], int size)
{
    MinHeapNode *left,*right,*top;
    //create minHeap and insert all characters of data
    priority_queue< MinHeapNode*, vector<MinHeapNode*>, compare> min_heap;

    for (int i=0; i<size; i++)
        min_heap.push( new MinHeapNode(data[i], freq[i]) );
    
    ///...Insert while size of heap doesn't equal to 1...
    while (min_heap.size()!=1)
    {
        left = min_heap.top();
        min_heap.pop();

        right = min_heap.top();
        min_heap.pop();

        top = new  MinHeapNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        
        min_heap.push(top);
    }
    printCode(min_heap.top(), "");
}

int main()
{
    int n, i; 
    cin>>n;

    char arr[n];  
    for (i=0; i<n; i++)
        cin>>arr[i];

    int freq[n]; 

    for (i=0; i<n; i++)
        cin>>freq[i];

    huffmancoding(arr, freq,n);
    return 0;
}