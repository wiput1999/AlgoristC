#include <stdio.h>
#include <stdlib.h>

int n;
int factorial(int n);

int main() {

    printf("%d\n", factorial(5));

    return 0;
}

int factorial(int n) {
    if(n == 1) return 1;
    else return n * factorial(n - 1);
}