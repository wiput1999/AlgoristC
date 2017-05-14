#include <stdio.h>
#include <stdlib.h>

int n,res,can = 0;
int num[100];

int main() {

    scanf("%d", &res);
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if((num[i] + num[j]) == res) {
                printf("Can be %d with %d + %d!\n", res, num[i], num[j]);
                can = 1;
                break;
            }
        }
    }

    if(can == 0) {
        printf("No any two number has sum of %d\n", res);
    }

    return 0;
}