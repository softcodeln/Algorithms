//
// Created by HP on 23-Jan-18.
//

#include<iostream>
using namespace std;

int gcd(int b , int a){
    int min , j , k;
    min = b < a ? b : a;

    for(j = 1; j <= min ; j++) {
        if (b%j == 0 && a%j == 0)
            k = j;
    }
    return k;
}

int main(void)
{
    int i , n , result ;
    cin >> n ;
    int a[n] ;
    for( i = 0; i < n ; i++ )
        cin >> a[i] ;
    result = a[0] ;
    for(i = 1 ; i < n ; i++) {
        result = gcd( result , a[i]);
    }

    cout << "GCD = " << result;
    return 0;
}
