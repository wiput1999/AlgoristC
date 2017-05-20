#include <stdio.h>
#include <stdlib.h>

int numbers[100000001];

int main() {
    for(int i = 0; i < 100000001; i++) {
        numbers[i] = 0;
    }

    for(int i = 1; i < 100000001; i++) {
        for(int j = i*2; j < 100000001; j+=i) {
            numbers[j] += i;
        }
    }

    for(int i = 0; i < 100000001; i++) {
        if(numbers[i] == i) {
            printf("%d\n", numbers[i]);
        }
    }

    return 0;
}