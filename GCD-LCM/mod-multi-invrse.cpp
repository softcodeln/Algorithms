//
// Created by HP on 25-Jan-18.
//
#include <iostream>
using namespace std;

int mod_Multi_Invrse(int a ,int m){
    a = a % m ;
    for(int x = 1 ; x < m ; x++ )
        if( (a * x) % m == 1 )
            return x;

}

int main(void)
{
    int a , m ;
    cin >> a >> m ;
   cout << "\nMODULAR MULTIPLICATIVE INVERSE \n " << mod_Multi_Invrse(a , m);
    return 0;
}
