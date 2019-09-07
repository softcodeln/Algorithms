//
// Created by HP on 24-Jan-18.
//
#include <iostream>
using namespace std;

int main(void)
{
    long long int n,prdct,y, p, t,m ;
    cin>>t;
    while(t--){
        m = 1234567 ;
        prdct=1;
        cin >> n ;
        n--;
        while(n--)
        {
            cin>>p;
            prdct = ( prdct * p ) % m ;   // this line continously avoid prdct to exceed m
                                          //  finally give total product  % m
        }
        cout<<prdct<<"\n";
    }
    return 0;
}