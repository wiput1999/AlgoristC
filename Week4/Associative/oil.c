#include <stdio.h>
#include <stdlib.h>

int n, oil[999];

int max(L, R) {
    int total = 0;
    int high = 0;
    if (L == R) {
        return oil[L];
    }
    if (L > R) {
        return 0;
    }
    
    for(int i = L; i <= R; i++) {
        total = oil[i];
        total += max(L, i - 2);
        total += max(i + 2, R);
        if (total > high) high = total;
    }
    
    return high;
}

int main() {

    scanf("%d ", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d ", &oil[i]);
    }
    int L = 0;
    int R = n - 1;

    printf("Result : %d\n", max(L, R));




    return 0;
}