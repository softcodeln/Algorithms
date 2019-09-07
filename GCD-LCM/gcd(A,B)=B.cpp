//
// Created by HP on 28-Jan-18.
//
#include<bits/stdc++.h>
using namespace std;

void countPair( int n )
{
    int c = 0 ;
    for( int i = 1 ; i <= n ; i++ )
    {
        for( int j = 1 ; j <= n ; j++ )
          if( j % i == 0 )
              c++ ;
    }
    cout << c ;
}
int main(void)
{
    int n ;
    cin >> n ;
    countPair( n ) ; //// count pair of gcd( A,B ) = B   where A<=n && B<=n
}