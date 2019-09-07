// C++ code to get maximum survival time 
#include <bits/stdc++.h> 
using namespace std; 

vector<int> spiralOrder(const vector<vector<int> > &A)
{    
int i,b,t,l,r,dir;

    t=0;
    b=A.size()-1;
    l=0;
    r=A[0].size()-1;
    dir=0;
    vector <int> v;

    while(t<=b && l<=r)
    {
        if(dir==0)
        {
            for(i=l;i<=r;i++)
                v.push_back(A[t][i]);
            t++; 
      
            dir=1;                
        }

        else if(dir==1)
        {
            for(i=t;i<=b;i++)
                v.push_back(A[i][r]);
            r--;

            dir=2;
        }

        else if(dir==2)
        {
            for(i=r;i>=l;i--)
                v.push_back(A[b][i]);
            b--;
           
            dir=3;
        }

        else 
        {
            for(i=b;i>=t;i--)
                v.push_back(A[i][l]);
            l++;
 
            dir=0;
        }
    }
    return v;
}

int main()
{ 
    int n,m,k;
    cin>>m>>n;
        vector<vector<int> > vect(m);

        for (int i = 0; i < m; i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>k;
                vect[i].push_back(k);
            }
        }

           vector<int> v = spiralOrder(vect);
            for (int i = 0; i < v.size(); i++)
                    cout<<v[i]<<" ";
	return 0; 
}