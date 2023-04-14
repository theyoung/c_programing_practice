//
// Created by devops on 23. 4. 14.
//
#include<stdio.h>

int main() {
    // Initializes variable ch and f
    char ch = 'a';
    float f = 1.5;
    // l stores an address of char variable
    char *l;
    l = &ch;
    // m stores an address of float variable
    float *m;
    m = &f;
    // Prints address of l and m
    printf ( "Value of l = %u\n", l ) ;
    printf ( "Value of m = %u\n", m ) ;

    return 0;
}