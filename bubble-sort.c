//
// Created by HP on 07-Mar-18.
//

#include < stdio.h >
////// bubble sort ///////////
int main( void ) {
    int i , j , n , tmp ;
    printf("enter size of array\n") ;
    scanf("%d",&n) ;
    int a[n] ;
    printf("enter elements to array \n") ;
    for( i = 0 ; i < n ; i++ )
        scanf("%d",&a[i]);

    for( i = 0 ; i < n ; i++ ){
        for( j = 0 ; j < n - i - 1 ; j++ ){
            if( a[j] > a[j+1] ){
                tmp = a[j];
                a[j] = a[j+1] ;
                a[j+1] = tmp ;
            }
        }
    }

    for( i = 0 ; i < n ; i++ )
        printf("%d ",a[i]);
    return 0;
}