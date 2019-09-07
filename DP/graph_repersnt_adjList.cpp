//.......Undirected Graph..........//
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,i,U,V,W,j;
    cout<<"Enter number of vertices\n";
    cin>>n;

    vector <pair<int, int> > adj_lst[n+1];

    for (i=0; i<n; i++)
    {
        cin>>U>>V>>W;
        adj_lst[U].push_back( make_pair(V,W));
        adj_lst[V].push_back( make_pair(U,W));

    }

    cout<<"\nVertex_source -> vertex_final : weight\n";
    for (i=1; i<=n; i++)
    {
        cout<<i<<" -> ";
        for (j=0; j<adj_lst[i].size(); j++)
            cout<<adj_lst[i][j].first<<" : "<<adj_lst[i][j].second<<"   ";
        cout<<"\n";
    }
    return 0;
}