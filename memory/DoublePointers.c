//
// Created by devops on 23. 4. 14.
//
# include <stdio.h>
int main( )
{
    // Initializes variable i
    int  i = 3 ;
    // Initializes pointer variable j
    int  *j ;
    // Stores address of i in j
    j = &i ;
    // Initializes double pointer variable k
    int **k ;
    // Stores address of pointer j in k
    k = &j;

    // Prints address of i, j and k
    printf ( "Address of i = %u\n", *k) ;
    printf ( "Address of j = %u\n", k) ;
    printf ( "Address of j = %u\n", *&k) ;
    printf ( "Address of k = %u\n", &k) ;

    // Prints value of i
    printf ( "%d %d %d %d %d %d", i, *&i, *j, **&j, **k, ***&k ) ;
    return 0 ;
}