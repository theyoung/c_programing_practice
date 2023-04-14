//
// Created by devops on 23. 4. 14.
//

#include <stdio.h>

int main() {
    // Initializes variable i
    int i = 3;
    printf("Address of i = %u\n", & i);
    printf("Value of i = %d\n", i);
    printf("Value of i = %d\n", *( & i));
    return 0;
}