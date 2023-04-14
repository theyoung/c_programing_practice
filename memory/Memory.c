//
// Created by devops on 23. 4. 14.
//

#include <stdio.h>

int main() {
    // Initializes variable i
    int i = 3;
    int* j = &i;

    printf("Address of i = %u\n", & i);
    printf("Address of j = %u\n", j);
    printf("value of j = %d\n", *j);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *( & i));
    return 0;
}