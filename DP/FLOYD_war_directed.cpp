//
// Created by lucky on 06-Apr-18.
//........FOR.DIRECTED..GRAPH...............//

#include<iostream>
using namespace std;


int main()
{
    int i,j,n,k;
    cout<<"enter number of vertex\n";
    cin>>n;
    int p[n][n];

    cout<<"\nEnter the Adjacency matrix p :\n";

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin>>p[i][j];
    cout<<"\nThe weighted matrix p :\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<p[i][j]<<" ";
        cout<<"\n";
    }

    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            if(p[i][j]==0 && i !=j)
                p[i][j] = 10000;
        }

    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
            for(j=0;j<n;j++)
                p[i][j] = p[i][j] < ( p[i][k]+p[k][j] ) ? p[i][j] : ( p[k][j]+p[i][k] );
    }

    cout<<"\nThe All pair shortest path matrix is\n";

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout<<p[i][j]<<" ";
        cout<<"\n";
    }
 return 0;
}