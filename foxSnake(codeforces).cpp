//
// Created by HP on 09-Aug-18.
//
#include<iostream>
using namespace std;

int main(void)
{
    int i,j,m,n;
    cin>>n>>m;
    char a[n][m];


    for(i=1;i<=n;i++)
    {
        for (j = 1; j <= m; j++)
            a[i][j]='.';
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(i%2 != 0)
              a[i][j]='#';

            else if( i%2 == 0 && i%4!=0)
                a[i][m]='#';

            else
                a[i][1]='#';
        }
    }

    for(i=1;i<=n;i++)
    {
        for (j = 1; j <= m; j++)
            cout<<a[i][j];
        cout<<"\n";
    }
    return 0;
}