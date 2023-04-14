//
// Created by devops on 23. 4. 14.
//
# include <stdio.h>
int main( )
{
    int m = 10 ;
    int *n ;
//    n = &m;
    printf("%d", *n);
    n++;
    printf("%d", *n);
    return 0 ;
}