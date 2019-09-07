//
// Created by HP on 26-Jan-18.
//
#include<iostream>
using namespace std;
int Extended_euclidn_gcd( int , int ,int *x , int *y );

void mod_multi_invrse( int a , int m) {
    int x = 1, y = 1;
    int g = Extended_euclidn_gcd(a, m, &x, &y);
    if (g == 1) {
        int res = (x % m + m) % m;
        cout << " inverse = " << res;
    } else
        cout << "\nMULTIPLICATIVE INVERSE CAN'T FIND \n";

}

int Extended_euclidn_gcd( int a , int b ,int *x , int *y ) {
        if (a == 0) {
            *x = 0;
            *y = 1;
            return b;
        }

        int x1 = 1, y1 = 1;
      int gcd =  Extended_euclidn_gcd(b % a, a , &x1, &y1);
        *x = y1 - (b / a) * x1;
        *y = x1;
        return gcd ;
    }

int main(void){
    int a , m ;
    cin >> a >> m ;
    mod_multi_invrse( a , m );
    return 0;
}
