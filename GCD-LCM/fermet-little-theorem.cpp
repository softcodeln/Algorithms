//
// Created by HP on 25-Jan-18.
//

#include <iostream>
using namespace std;
int power ( int , unsigned int , int);
int gcd( int , int );

void inverse_find(int a ,int m ){

    if( gcd(a , m) == 1)
       cout <<" \nmultiplicative inverse = " << power ( a , m-2 , m);


    else
    cout << "\nINVERSE CAN'T FIND\n";

}

int gcd ( int a , int b){
    if( a == 0)
        return b ;

        return gcd( b % a , a );
}

int power (int x , unsigned int y , int m ){
    if(y == 0)
        return 1;
    int p = power( x , y / 2 , m ) % m;
        p = ( p * p ) % m ;

    return ( y%2 == 0 ) ? p : (x * p) % m ;
}

int main(void)
{
    int a , m , inverse ;
    cin >> a >> m ;
     inverse_find( a , m);
    return 0;
}