//
// Created by HP on 07-Mar-18.
//

#include<stdio.h>
////// linear search ///////////
int main( void ) {
    int i, j , n , index = -1 , seach ;
    printf("enter size of array\n") ;
    scanf("%d", &n) ;
    int a[n] ;
    printf("enter elements to array \n") ;
    for (i = 0 ; i < n ; i++ )
        scanf("%d", &a[i]) ;
    printf("enter the element to be search\n") ;
    scanf("%d",&seach) ;
    for( i = 0 ; i < n ; i++ )
        if( a[i] == seach )
            index = i ;
    if( index != -1 )
        printf("element found at index = %d\n",index);
    else
        printf("element not found\n") ;
    return 0 ;
}
