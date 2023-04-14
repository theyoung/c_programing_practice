//
// Created by devops on 23. 4. 14.
//
# include <stdio.h>
int main( )
{
    // Initializes variable i
    int  i = 10;
    // Initializes pointer variables
    int  *j , **k , ***l, ****m;
    // Stores address of i in j
    j = &i ;
    // Stores address of pointer j in k
    k = &j;
    // Stores address of pointer to a pointer (k) in l
    l = &k;
    // Stores address of pointer to a pointer to a pointer (l) in m
    m = &l;
    return 0 ;
}