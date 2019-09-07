
//..........DP approach to count no. of times pattern appear as subsequence in given string ...........//

#include<iostream>
using namespace std;

int counter_subsqnce(string S, string P, int m, int n)
{
    int t[m+1][n+1];
    int i,j;

    //.......Base case if given string S is empty ..........//
    for(i=0; i<=n ; i++ )
        t[0][i]=0;
    
    //......Base case if given Pattern P is empty...........//
    for (i=0; i<=m; i++)
        t[i][0]=1;
    

    for(i=1; i<=m; i++)
        for (j=1; j<=n; j++)
            t[i][j]= ( (S[i-1]==P[j-1])? t[i-1][j-1] : 0 ) + t[i-1][j] ;
    return t[m][n];
}

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string S,P;
        cin>>S>>P;
        cout<<counter_subsqnce(S, P, S.size(), P.size())<<"\n";
    }
    return 0;
}