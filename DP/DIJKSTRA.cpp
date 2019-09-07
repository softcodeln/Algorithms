#include<bits/stdc++.h>
using namespace std;

typedef pair< int, int > iPair;

void Initialize_for_vertices(int d[],int paa[],int E, int src)
{
    for (int i=0; i<E; i++)
    {
        d[i] = INT_MAX;
        paa[i] = -1;
    }
    d[src]=0;
}

void relax( int u, int v, int wgt, int d[],int paa[], priority_queue< iPair, vector< iPair>, greater<iPair>> pq )
{
    d[v]=d[u]+wgt;
    paa[v]=u;

    pq.push(make_pair(d[v],v));
}

int main()
{
    int i, u, v, wgt, V, E;
    cout<<"Enter no. of vertices and Edges: \n";
    cin>>V>>E;

    int d[E], paa[E];

    vector < iPair> adjlst[E];

    priority_queue< iPair, vector< iPair>, greater<iPair>> pq;

    int src=0;     //......source is 0........//

    pq.push(make_pair(0,src));

    Initialize_for_vertices(d, paa, E, src);

    cout<<"Enter  weights of Edges:\n";
    for (i=0; i<E; i++)
    {
        cin>>u>>v>>wgt;
        adjlst[u].push_back(make_pair(v,wgt));
    }

    while(!pq.empty())
    {
        u = pq.top().second;
        pq.pop();

            for (i=0; i<adjlst[u].size(); i++)
            {
                wgt = adjlst[u][i].second;
                v   = adjlst[u][i].first;

                if(d[u]!=INT_MAX && d[v]>d[u]+wgt) //........CHECKING FOR RELAXATION OF EDGES.......//
                {   //....RELAXATION OF EDGE (u,v) TAKING PLACE............//
                    d[v]=d[u]+wgt;
                    paa[v]=u;
                    pq.push(make_pair(d[v],v));
                }   
            }
    }

    cout<<"\nSource is 0 (zero):\nVertex\tDistace\tParent ( -1 ie. NO parent)\n";
    for ( v=0; v<V; v++)
        cout<<"     "<<v<<"\t "<<d[v]<<"\t"<<paa[v]<<"\n";

    return 0;
}