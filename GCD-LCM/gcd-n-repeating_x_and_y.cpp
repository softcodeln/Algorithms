//
// Created by HP on 28-Jan-18.
//.......Given three positive integer n, x, y. The task is to print Greatest Common Divisor of numbers formed
// by n repeating x times  and number formed by n repeating y times.

#include<bits/stdc++.h>
using namespace std;

void gcd( int n , int x , int y ){
    int g ;
    g = __gcd( x , y ) ;
    for(int i = 0 ; i < g ; i++ )
        cout << n ;
}

int main(void)
{
    int n , x , y ;
    cin >> n >> x >> y ;
    gcd( n , x , y ) ;

    return 0;
}