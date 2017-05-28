#include <stdio.h>
#include <stdlib.h>

int n, train[999], cost = 0;

int min(int L,int R) {
    int total = 0, left, right, m = 999999;

    if (L == R) {
        return 0;
    }
    if (R - L == 1) {
        return (train[L] + train[R]) * 2;
    }
    if (L > R) {
        return 0;
    }

    int sum = 0;
    for(int i = L; i <= R; i++) {
        sum += train[i];
    }

    for(int i = L; i < R; i++) {
        left = min(L, i);
        right = min(i + 1, R);
        total = left + right + sum * 2;
        if (total < m) {
            m = total;
        }
    }

    return m;
}

int main() {

    scanf("%d ", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &train[i]);
    }
    int L = 0;
    int R = n - 1;

    printf("Result : %d\n", min(L, R));




    return 0;
}