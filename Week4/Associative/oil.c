#include <stdio.h>
#include <stdlib.h>

int n, oil[999], result[999][999];

int max(L, R) {
    int total = 0;
    int high = 0;
    if (L == R) {
        return oil[L];
    }
    if (L > R) {
        return 0;
    }

    if(result[L][R] != -1) {
        return result[L][R];
    }
    
    for(int i = L; i <= R; i++) {
        total = oil[i];
        total += max(L, i - 2);
        total += max(i + 2, R);
        if (total > high) high = total;
    }
    
    result[L][R] = high;
    return high;
}

int main() {

    scanf("%d ", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d ", &oil[i]);
    }
    int L = 0;
    int R = n - 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            result[i][j] = -1;
        }
    }

    printf("Result : %d\n", max(L, R));




    return 0;
}