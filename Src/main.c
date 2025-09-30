#include <stdio.h>
#include "main.h"

void hello_world(void) {
    printf("Hello, World from Src/main.c!\n");
}

int main(void) {
    hello_world();
    printf("new update added\n");
    printf("new update in the main\n");
    printf("new update in the release\n");

    return 0;
}


