//
// Created by devops on 23. 4. 14.
//
#include <stdio.h>

int main(){
    int i = 3;
    int *j;
    j = &i;

    // Prints address of i
    printf("Address of i = %u\n", &i);
    printf("Address of i = %u\n", j);
    // Prints address of j
    printf("Address of j = %u\n", &j);


    // Prints value of i
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *(&i));
    printf("Value of i = %d\n", **&j);
    printf("Value of i = %d\n", *j);
    // Prints value of j
    printf("Value of j = %u\n", j);
    printf("Value of j = %u\n", *&j);

    return 0;
}