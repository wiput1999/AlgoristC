#include <stdio.h>
#include <stdlib.h>

int n, wine[999];

int max(int L,int R,int yr) {
    int total = 0;

    if (L == R) {
        return wine[L] * yr;
    }
    if (L > R) {
        return 0;
    }
    
    int A = (wine[L] * yr) + max(L + 1, R, yr + 1);
    int B = (wine[R] * yr) + max(L, R - 1, yr + 1);

    if (A > B) return A;
    return B;
}

int main() {

    scanf("%d ", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d ", &wine[i]);
    }
    int L = 0;
    int R = n - 1;

    printf("Result : %d\n", max(L, R, 1));




    return 0;
}