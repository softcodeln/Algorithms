// Number theory //
// Created by HP on 13-Mar-18.
//
#include<bits/stdc++.h>
using namespace std;

int main(void){
   long long int i,n,q,root;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;
    while(n--){
        cin>>q;
        root = sqrt(q);
       // cout<<"-->"<<root;
        for(i=2;i*i<root;i++)
            if(q%i==0)
                break;
        if( i*i > root && root*root == q && q > 1 )
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
