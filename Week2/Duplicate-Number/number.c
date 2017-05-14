#include <stdio.h>
#include <stdlib.h>

int n;
int num[100];

int compare(const void *a, const void *b) {
    int x = *(int*) a;
    int y = *(int*) b;
    return x - y;
}

int main() {

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    qsort(num, n, sizeof(int), compare);

    for(int i = 0; i < n; i++) {
        if(i == 0) {
            printf("%d\n", num[i]);
        } else {
            if (num[i] != num[i - 1]) {
                printf("%d\n", num[i]);
            }
        }
    }

    return 0;
}