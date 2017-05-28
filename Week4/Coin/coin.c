// Partition problem
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, c[999], p[999], temp[999], total = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d ", &c[i]);
    }

    // Sum of array P
    for(int i = 0; i < n; i++) {
        total += c[i];
    }

    p[0] = 1;
    temp[0] = 1;
    for(int i = 1; i <= total; i++) {
        p[i] = 0;
    }
    // Total
    for(int i = 1; i <= total; i++) {    
        for(int j = 0; j < n; j++) {
            if(i - c[j] >= 0) {
                if(p[i - c[j]] == 1) {
                    temp[i] = 1;
                } else {
                    temp[i] = 0;                    
                }
            }
        }
        for(int j = 0; j <= total; j++) {
            p[j] = temp[j];
        }
    }

    for(int j = 0; j <= total; j++) {
        printf("%d %d\n", j, p[j]);
    }

    if(total % 2 == 1) {
        printf("Impossible!\n");
    } else {
        if(p[total / 2] == 1) {
            printf("Possible!\n");
        }
        else {
            printf("Impossible!\n");
        }
    }

    return 0;
}