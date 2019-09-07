//
// Created by HP on 07-Mar-18.
//

#include<stdio.h>
////// binery search ///////////
int main(void) {
    int i , j , n , tmp , serch ;
    printf("enter size of array\n") ;
    scanf("%d", &n);
    int a[n] , lb = 0 , ub = n , mid ;
    printf("enter elements to array \n") ;
    for (i = 0 ; i < n ; i++ )
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        for (j = 0 ; j < n - i - 1 ; j++ ) {
            if (a[j] > a[j + 1]) {
                tmp = a[j] ;
                a[j] = a[j + 1] ;
                a[j + 1] = tmp ;
            }
        }
    }
    printf("elements in sorted order\n") ;
    for (i = 0 ; i < n ; i++ )
        printf("%d ", a[i]) ;
    printf("\nente the element to be search\n") ;
    scanf("%d", &serch) ;
    mid = (lb + ub)/2 ;

    while (lb < ub) {
        if (a[mid] > serch)
            ub = mid - 1 ;
        else if (a[mid] < serch)
            lb = mid + 1 ;
        else
        {   printf("element %d fouond at index = %d ", a[mid],mid) ;
            break ; }
        mid = (lb + ub) / 2 ;
    }
    if (lb > ub)
        printf("element not found\n") ;
    return 0;
}