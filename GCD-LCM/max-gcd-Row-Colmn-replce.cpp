//
// Created by HP on 27-Jan-18.
//
#include<bits/stdc++.h>
using namespace std;

void replace_matrix( int r ,int c , int arr[][10] )
{
     int rgcd[r] = { 0 } , cgcd[c] = { 0 };
    for( int i = 0 ; i < r ; i++ ){
        for( int j = 0 ; j < c ; j++ ){
            rgcd[i] = __gcd( rgcd[i] , arr[i][j] ) ;
            cgcd[j] = __gcd( cgcd[j] , arr[i][j] ) ;
        }
    }

    for( int i = 0 ; i < r ; i++ ){
        for( int j = 0 ; j < c ; j++ ){
           arr[i][j] = max( rgcd[i] , cgcd[j] );
        }
    }
}

int main(void)
{
    int  i , j , r , c ;
    cout << "enter number of Rows and Columns in matrix\n" ;
    cin >> r >> c ;
    int arr[10][10] ;
    cout << "enter the element of matrix \n";

    for ( i = 0 ; i < r ; i++ ){
        for( j = 0 ; j < c ; j++){
            cin >> arr[i][j] ;
        }
    }
    replace_matrix( r , c , arr ) ;
    cout << "matrix after replacement\n" ;

    for ( i = 0 ; i < r ; i++ ){
        for( j = 0 ; j < c ; j++){
            cout << arr[i][j] <<" " ;
        }
        cout << "\n";
    }

    return 0 ;
}