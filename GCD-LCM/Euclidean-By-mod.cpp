//
// Created by HP on 24-Jan-18.
//
#include<iostream>
using namespace std;
int gcd( int a ,int b){
    if(a == 0)
        return b;
    else
        return gcd( b%a , a );
}
int main(void)
{
    int a,b;
    cin >> a >> b ;
    cout <<"\nGCD = "<<gcd( a , b );
    return 0;
}
