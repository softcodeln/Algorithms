///.............DFS GRAPF TRAVERSAL..(DIRECTED)..............///

#include<bits/stdc++.h>
using namespace std;

void DFS_VISITED(string color[], int &time, int u, int paa[], int d[], int f[], vector<int> adjLst[] )
{
    color[u]="grey";
    time+=1;
    d[u]=time;

    for (int i=0; i< adjLst[u].size(); i++)
    {
        if(color[adjLst[u][i]]=="white")
        {
            paa[adjLst[u][i]]=u;
            DFS_VISITED(color, time, adjLst[u][i], paa, d, f, adjLst);
        }
    }

    time+=1;
    color[u]="Black";
    f[u]=time;
}

int main()
{
    int V,e,i,vf,ui,s=0,u,v,time;

    cout<<"Enter number of vertices and edges :\n";
    cin>>V>>e;

    vector<int> adjLst[V];

//........Adjacency list is ready......//
    for (i=0; i<e; i++)
    {
        cin>>ui>>vf;
        adjLst[ui].push_back(vf);
    }

    string color[V];
    int d[V];
    int paa[V];
    int f[V];

//........make all vertices undiscovered or unvisited ....//
    for(i=0;i<V;i++)
    {
        color[i]="white";
        paa[i]=-1;
    }
    time=0;

    for(i=0;i<V;i++)
    {
        if (color[i]=="white")
        {
            DFS_VISITED(color, time, i, paa, d, f, adjLst);
        }
    }

    cout<<"vertex:    ";
    for(i=0;i<V;i++)
        cout<<"   "<<i;
    cout<<"\n";
    
    cout<<"color:       ";
    for(i=0;i<V;i++)
        cout<<color[i]<<" ";
    cout<<"\n";

    cout<<"VisitTime  ";
    for(i=0;i<V;i++)
        cout<<"   "<<d[i];
    cout<<"\n";
    
    cout<<"Final_T    ";
    for(i=0;i<V;i++)
        cout<<"   "<<f[i];
    cout<<"\n";

    cout<<"parent:    ";
    for(i=0;i<V;i++)
    {
        if (paa[i] !=-1)
            cout<<"   "<<paa[i];
        else
            cout<<"   "<<"-";
    }
}