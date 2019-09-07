#include<bits/stdc++.h> 
using namespace std;

double max_avg_path(vector<vector<int>> &v)
{
    int i,j,n = v[0].size();
    int d[n][n];
    d[0][0]=v[0][0];

   for(i=1;i<n;i++)
        d[i][0]= d[i-1][0]+v[i][0];

    for(i=1;i<n;i++)
        d[0][i]=d[0][i-1]+v[0][i];
    
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
            d[i][j]= max(d[i][j-1],d[i-1][j])+v[i][j];
    }

    double res =n+n-1;
    res = d[n-1][n-1]/res;
    
    return  res;
}

int main()
{
	int n,m,i,j;
    cin>>n;
    vector<vector<int>> v(n);
    
    for(i=0;i<n;i++)
	{
        for(j=0;j<n;j++)
        {
            cin>>m;
            v[i].push_back(m);
        }
	}
	
    cout<<"MAX avrge path is: "<<max_avg_path(v);
	
	return 0;
}