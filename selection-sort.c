//
// Created by HP on 07-Mar-18.
//


#include < stdio.h >
////// Selection Sort ///////////
int main( void ) {
    int i , j , n , tmp , min ;
    printf("enter size of array\n") ;
    scanf("%d", &n) ;
    int a[n] ;
    printf("enter elements to array \n") ;
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0 ; i < n - 1 ;i++ ){
        min = i;
        tmp = a[min] ;
        for( j = i + 1 ; j < n ; j++ )
         if( a[j] < tmp )
             min = j ;

        if(min != i )
        {
            tmp = a[i] ;
            a[i] = a[min] ;
            a[min] = tmp ;
        }
    }

    for (i = 0; i < n; i++ )
        printf("%d ",a[i]);

    return 0;
}
