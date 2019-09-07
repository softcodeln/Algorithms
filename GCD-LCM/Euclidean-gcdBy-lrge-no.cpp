//
// Created by HP on 24-Jan-18.
//
#include<iostream>
using namespace std;

int gcd(int , int) ;

int gcdlarge( int a ,string num ){
    int b = 0;
    for( int i = 0;i < num.length() ; i++)
       b = ( b * 10 + (int)num[i] - '0' )%a;

    return gcd(a , b);
}

int gcd(int a , int b){
    if(a == 0)
        return b;
    else
        return (gcd( b%a , a ));
}

int main(void)
{
    int a;
    string num;
    cin >> a ;
    cin >> num;
    cout << "GCD = "<<gcdlarge( a , num);
    return 0;
}