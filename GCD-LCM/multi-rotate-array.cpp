//
// Created by HP on 28-Jan-18.
//
#include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int n, int temp[]) {
            for( int i = 0 ; i < n ; i++ )
                temp[i] = temp[i + n] = arr[i];
  }
void printRotateArr( int temp[] , int k , int n){
                int start = k % n ;

                for(int i = start ; i < (start + n) ; i++ )
                    cout << temp[i] << " " ;
}

int main(void)
{
    int i , n , k ;
    cin >> n ;
    int arr[n] , temp[2 * n];
    cout << "enter " << n <<" elements of array \n";
    for( i = 0 ; i < n ; i++ )
      cin >> arr[i] ;
    cout << "enter number of time you want to rotate array\n ";
    cin >> k ;
    rotateArray(arr, n, temp ) ;
    cout << "Array affter " << k <<" rotations \n  " ;
    printRotateArr( temp , k , n) ;

    return 0 ;
}
