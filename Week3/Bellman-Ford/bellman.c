#include <stdio.h>
#include <stdlib.h>

int G[1000][1000], n;
int cost[1000];
int start = 0;
int infinity = 999999;

int main() {
    int i, j, k, total;

    scanf("%d ", &n);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &G[i][j]);
            if(G[i][j] == 0 && i != j) {
                G[i][j] = infinity;
            }
        }
    }

    for(i = 0; i < n; i++) {
        cost[i] = G[start][i];
    }

    for(k = 0; k < n - 1; k++) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if(cost[j] > cost[i] + G[i][j]) {
                    cost[j] = cost[i] + G[i][j];
                }
            }
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d %d\n", i, cost[i]);
    }

    return 0;
}