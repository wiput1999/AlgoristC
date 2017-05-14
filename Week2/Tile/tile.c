#include <stdio.h>

double price[100];

double trimax(double a, double b, double c) {
    if(a > b && a > c) return a;
    if(b > a && b > c) return b;
    return c;
}

int main() {

    price[0] = 0;
    price[1] = 1.25;

    for(int i = 2; i <= 8; i++) {
        double c1 = 0, c2 = 0, c3 = 0;
        if(i - 1 >= 0) {
            c1 = 1.25 + price[i - 1];
        }
        if(i - 2 >= 0) {
            c2 = 2.65 + price[i - 2];
        }
        if(i - 3 >= 0) {
            c3 = 3.85 + price[i - 3];
        }
        price[i] = trimax(c1, c2, c3);
    }

    printf("%f\n", price[5]);
    
    return 0;
}