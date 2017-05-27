#include <stdio.h>
#include <stdlib.h>

int n, rel, release[999];

int min(int L, int R) {
    int gold = 0, m = 99999;
    for(int i = 0; i < rel; i++) {
        if (release[i] <= R &&  release[i] >= L) {
            gold = R - L;
            gold += min(L, release[i] - 1);
            gold += min(release[i] + 1, R);
            if (gold < m) m = gold;
        }
    }

    if (m == 99999) return 0;
    return m;
}

int main() {

    scanf("%d", &n);
    scanf("%d", &rel);
    for(int i = 0; i < rel; i++) {
        scanf("%d", &release[i]);
    }

    printf("%d\n", min(1, n));


    return 0;
}