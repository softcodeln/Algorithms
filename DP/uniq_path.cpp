#include<bits/stdc++.h>
using namespace std;

int uniquePathsWithObstacles(vector<vector<int> > &a)
{
    int m,n,i,j;
    m=a.size();
    n=a[0].size();
    
    vector<vector<int>>p(m+1);

    for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
         {
            p[i].push_back(0);
         }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j && i==0)
                {
                    if(a[i][j]==1)
                    p[i][j]=0;
                    
                    else
                    p[i][j]=1;
                    
                }
  
            else if(a[i][j]==1)
                p[i][j]=0;
  
            else if(a[i][j]==0)
            {
                if(j>0 && i>0)
                    p[i][j]+=p[i][j-1]+p[i-1][j];
                
                else if(j==0)
                    p[i][j]+=p[i-1][j];
                else
                    p[i][j]+=p[i][j-1];
            }
        }
    }
    return p[m-1][n-1];
}

int main()
{
    int m,n,i,j,x;
    cin>>m>>n;
       vector<vector<int>> a(m);

       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               cin>>x;
                a[i].push_back(x);
           }
       }

    cout<<uniquePathsWithObstacles(a);

    return 0;
}









  /*
        for(i=0;i<=m;i++)
    {
        for(j=0;j<=n;j++)
         {
           cout<< p[i][j]<<" "; 
         }   cout<<"\n";
    }
      return 0;*/