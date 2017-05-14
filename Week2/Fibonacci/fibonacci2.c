#include <stdio.h>
#include <stdlib.h>

long int n,num[100];

long int fibo(long int n) {
    if(num[n] == -1) {
        long int result = fibo(n - 1) + fibo(n - 2);
        num[n] = result;
    }
    return num[n];
}

int main() {

    for(int i = 0; i < 100; i++) {
        num[i] = -1;
    }

    num[0] = 0;
    num[1] = 1;

    printf("%ld\n\n",fibo(50));

    for(int i = 0;i < 50; i++) {
        printf("%ld\n", num[i]);
    }

    return 0;
}