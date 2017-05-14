#include <stdio.h>
#include <stdlib.h>

int n;
int num[100];
int left = 0, right, mid;

int compare(const void * a, const void * b) {
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

    right = n - 1;
    int find = 18;

    while(1) {
        mid = (left + right) / 2;
        if(num[mid] > find) {
            right = mid - 1;
        }
        if(num[mid] < find) {
            left = mid + 1;     
        }
        if(left > right) {
            printf("Not Found!\n");
            break;
        }
        if(num[mid] == find) {
            printf("Found!\n");
            break;
        }
    }

    return 0;
}