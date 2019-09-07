#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,n;

    cin>>n;

    int d[n+1][10];

    for(i=0;i<10;i++)
        d[0][i]=1;
    
    for(i=0;i<=n;i++)
        d[i][9]=1;

    for(i=1;i<=n;i++)
    {
        for(j=8;j>=0;j--)
        {
            d[i][j]=d[i-1][j]+d[i][j+1];
        }
    }    

    cout<<d[n][0];

    return 0;
}