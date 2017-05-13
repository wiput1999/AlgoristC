#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char name[100];

    while(1) {
        char *x = gets(name);
        if(x == NULL) break;
        printf("Hello, %s!\n", name);
    }

    return 0;
}