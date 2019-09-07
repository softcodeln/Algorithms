//..........Min No. of operation required to change A to B....................//


#include<bits/stdc++.h>
using namespace std;

int min_oprtn(string &A, string &B)
{
    int n,m,i,j;
    m = A.length();
    n = B.length();

    if(n != m)
        return -1;
    int count[123];

    memset(count, 0, sizeof(count));

    for (i=0; i<n; i++)
        count[A[i]]++;
    for (i=0; i<n; i++)
        count[B[i]]--;
    
    for (i=0; i<n; i++)
        if(count[A[i]]!=0)
            return -1;
    
    int opr = 0;

    for (i=n-1, j=n-1; i>=0; )
    {
        while (i>=0 && A[i] != B[j])
        {
            i--;
            opr++;
        }

        if(i>=0)
        {
            i--;
            j--;
        }
    }

    return opr;
}


int main()
{
    string A,B;
    cin>>A>>B;
    cout<<"Min No. of operation required to change A to B: "<<min_oprtn(A, B);
    return 0;
}