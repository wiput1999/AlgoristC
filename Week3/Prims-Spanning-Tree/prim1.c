#include <stdio.h>
#include <stdlib.h>

int G[1000][1000],spanning[1000][1000],n;
int infinity = 9999;

int prims() {
    int cost[1000][1000];
    int u, v, min_distance, distance[1000], from[1000];
    int visited[1000], no_of_edges, i, j, min_cost;

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(G[i][j] == 0) {
                cost[i][j] = infinity;
            } else {
                cost[i][j] = G[i][j];
                spanning[i][j] = 0;
            }
        }
    }

    distance[0] = 0;
    visited[0] = 1;

    for(i = 0; i < n; i++) {
        distance[i] = cost[0][i];
        from[i] = 0;
        visited[i] = 0;
    }

    min_cost = 0;
    no_of_edges = n - 1;

    while(no_of_edges > 0) {
        min_distance = infinity;
        for(i = 1; i < n; i++) {
            if(visited[i] == 0 && distance[i] < min_distance) {
                v = i;
                min_distance = distance[i];
            }
        }

        u = from[v];

        spanning[u][v] = distance[v];
        spanning[v][u] = distance[v];

        no_of_edges--;

        visited[v] = 1;

        for(i = 1; i < n; i++) {
            if(visited[i] == 0 && cost[i][v] < distance[i]) {
                distance[i] = cost[i][v];
                from[i] = v;
            }
        }

        min_cost += cost[u][v];

    }

    return min_cost;
}

int main() {
    int i, j, total;
    scanf("%d ", &n);

    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &G[i][j]);
        }
    }

    total = prims();

    printf("Minimum cost : %d\n", total);

    return 0;
}