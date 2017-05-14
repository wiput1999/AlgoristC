#include <stdio.h>
#include <stdlib.h>

int n,res,can = 0;
int num[100];

int compare(const void * a, const void * b) {
    int x = *(int*) a;
    int y = *(int*) b;
    return x - y;
}

int main() {

    scanf("%d", &res);
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    qsort(num, n, sizeof(int), compare);

    int i = 0, j = n - 1;
    while(1) {
        if((num[i] + num[j]) > res) {
            j--;
        }
        if((num[i] + num[j]) < res) {
            i++;
        }
        if((num[i] + num[j]) == res) {
            printf("Can be %d with %d + %d!\n", res, num[i], num[j]);
            break;
        }
        if(i == j) {
            printf("No any two number has sum of %d\n", res);
            break;
        }
    }

    return 0;
}