//
// Created by lucky on 11-Feb-18.
//
#include<bits/stdc++.h>
using namespace std;

int main(void){
    int n,m,t,i,j,med;
    cin>>t;
    while(t--){
        cin>>n>>m;
        j=n+m;
        int a[j];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=n;i<j;i++)
            cin>>a[i];
        sort(a,a+j);
        if(j%2==0)
            med = (a[j/2-1]+a[j/2+1-1])/2;
        else
            med = a[(j+1)/2-1];
        cout<<med<<"\n";
    }
    return 0;
}
