//......Directed..Graph...//
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int V,i,U,V,W,j,E;
    cout<<"Enter number of vertices and no. of edges: \n";
    cin>>V>>E;

    vector <pair<int, int> > adj_lst[V+1];

    for (i=0; i<E; i++)
    {
        cin>>U>>V>>W;
        adj_lst[U].push_back( make_pair(V,W));
    }

    cout<<"vertex_source -> vertex_final : weight\n";
    for (i=1; i<=V; i++)
    {
        cout<<i<<" -> ";
        for (j=0; j<adj_lst[i].size(); j++)
            cout<<adj_lst[i][j].first<<" : "<<adj_lst[i][j].second<<"   ";
        cout<<"\n";
    }
    return 0;
}