//
// Created by HP on 14-Mar-18.
//
#include<bits/stdc++.h>
using namespace std;

int main(void){
    long long int i,j,n;
    cin>>i>>j>>n;
    cout<<((i%n)*(j%n))%n;
    //cout<<(i*j)%n;


    return 0;
}
