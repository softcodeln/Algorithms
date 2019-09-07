#include<bits/stdc++.h>
using namespace std;

int n_digit_non_decsng(int n);

int main()
{
    int n;
    cin>>n;

    int res = n_digit_non_decsng(n);
    cout<<"Total n digit non decresing integers are:"<<res;

    return 0;
}

int n_digit_non_decsng(int n)
{

    int i,j,d[n+1][10];

    for(i=0;i<=9;i++)
        d[0][i]=1;

    for(i=0;i<=n;i++)
        d[i][9]=1;

    for(j=8;j>=0;j--)
    {
        for(i=1;i<=n;i++)
            d[i][j]=d[i-1][j]+d[i][j+1];

    }

    return d[n][0];
}