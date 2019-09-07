#include<bits/stdc++.h>
using namespace std;

class Edges
{
    public:
    int src, dest, weight ;
};

class Graph
{
    public:
    int E, V;
    Edges *edge;

    void get_parameter (int i)
    {
        cin>>edge[i].src>>edge[i].dest>>edge[i].weight;
    }
};

Graph* createGraph(int V, int E)
{
    Graph *graph = new Graph;
    graph->edge = new Edges[E];
    graph->E = E;
    graph->V = V;

    return graph;
}

void Initialize_graph(Graph *graph, int dist[], int pa[] , int src)
{
    for (int i=0; i<graph->V; i++)
    {
        dist[i] = INT_MAX;
        pa[i] = -1;
    }

    dist[src] = 0;
}

void Relax(int u, int v, int w, int dist[], int pa[])
{
    if (dist[u]!=INT_MAX && dist[v]> (dist[u]+w) )
        {
            dist[v] = dist[u]+w;
            pa[v] = u;
        }
}

void show_short_distance(int dist[], int  pa[], int V)
{
    cout<<"vrtx"<<" : "<<"dist_frm_src"<<" : "<<"Parent"<<"\n";
    for ( int i=0; i<V; i++)
    {
        cout<<i<<"      : "<<dist[i]<<"        : "<<pa[i]<<"\n";
    }
}

Graph* Bell_Man_Ford(Graph* graph, int src)
{
    int V=graph->V, E=graph->E;
    int i, j, dist[V], pa[V];

    Initialize_graph(graph, dist, pa , src);

    for (i=0; i<(graph->V)-1; i++)
    {
        for (j=0; j<graph->E; j++)
            Relax(graph->edge[j].src, graph->edge[j].dest, graph->edge[j].weight , dist, pa);
    }

   

    show_short_distance(dist, pa, V);

return 0;
}

int main()
{
    int V, E;
    Graph *graph;

    cout<<"Enter the no. of vertices and edges\n";
    cin>>V>>E;

    graph = createGraph(V, E);

    cout<<"Enter source, destination and weight of each edge\n";
    for (int i=0; i<E; i++)
        graph->get_parameter(i);
    
    //.......we have taken source of WHOLE GRAPH as src = 0......//
    Bell_Man_Ford(graph,0);

    return 0;
}