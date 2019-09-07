//
// Created by HP on 24-Jan-18.
//
#include <iostream>
using namespace std;

int modExpo(int x ,int y ,int p){
  int res = 1 ;
    x = x % p ;
    while( y > 0){
        if ( y & 1)
            res = ( res * x ) % p ;
        y = y >> 1 ; /// y = y / 2;
        x =( x * x ) % p;
    }
    return res ;
}
int main(void)
{
    int x,y,p;
    cin >> x >> y >> p ;

    cout <<x<<"^"<<y<<"%"<<p<<" = "<<modExpo(x , y , p);
    return 0;
}