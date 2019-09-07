///..@LUCKY.............BFS GRAPF TRAVERSAL (UNDIRECTED)...............///

#include<bits/stdc++.h>
#include<list>
#include<queue>
using namespace std;

int main()
{
    int V,e,i,vf,ui,s=0,u,v;

    cout<<"Enter number of vertices and edges :\n";
    cin>>V>>e;
    queue<int> queues;
    vector<list<int>> adjLst(V);

//........Adjacency list is ready......//
    for (i=0; i<2*e; i++)
    {
        cin>>ui>>vf;
        adjLst[ui].push_back(vf);
    }

    string color[V];
    int d[V];
    int paa[V];

//........make all vertices undiscovered or unvisited ....//
    for(i=0;i<V;i++)
    {
        color[i]="white";
        d[i]=1.0/0.0;        //..Positive infinity..//
        paa[i]=-1;
    }


//.....parent/source (s) is vertex no. 0 (zero)....//
    s = 0;
    color[s]="grey";
    d[s]=0;
    queues.push(s);

    while(queues.size() != 0)
    {
        u = queues.front();
        queues.pop();

        list<int> :: iterator itr = adjLst[u].begin();
        while( itr != adjLst[u].end() )
        {
            if (color[*itr]=="white")
            {
                color[*itr]="grey";
                d[*itr]=d[u]+1;
                paa[*itr]=u;
                queues.push(*itr);
            }
            itr++;
        }
        
        color[u]="red";
    }

    cout<<"vertex:    ";
    for(i=0;i<V;i++)
        cout<<"   "<<i;
    cout<<"\n";
    
//    cout<<"color:       ";
//    for(i=0;i<V;i++)
//        cout<<color[i]<<" ";
//    cout<<"\n";

    cout<<"distance:  ";
    for(i=0;i<V;i++)
        cout<<"   "<<d[i];
    cout<<"\n";
    
    cout<<"parent:   ";
    for(i=0;i<V;i++)
        cout<<"   "<<paa[i];
    return 0;
}