#include <stdio.h>
#include <stdlib.h>

int f0,f1,n;

int fibo(int n) {
    if(n == 0 || n == 1) return n;
    else return fibo(n - 1) + fibo(n - 2);
}

int main() {

    printf("%d\n",fibo(50));

    return 0;
}