#include <stdio.h>

int stamp[100] = {0,1,2,3,1,1};

int trimin(int a, int b, int c) {
    if(a < b && a < c) return a;
    if(b < a && b < c) return b;
    return c;
}

int main() {

    for(int i = 6; i <= 21; i++) {
        int c1 = 1 + stamp[i - 1];
        int c2 = 1 + stamp[i - 4];
        int c3 = 1 + stamp[i - 5];

        stamp[i] = trimin(c1, c2, c3);
    }

    printf("%d\n", stamp[8]);
    printf("%d\n", stamp[16]);
    printf("%d\n", stamp[17]);
    printf("%d\n", stamp[21]);
    
    return 0;
}