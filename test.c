#include <stdio.h>
#include <math.h>

unsigned char x;
signed char y;

signed int i;

int f(int x) {
	return 2 * x;
}

float convert(float meter) {
	return meter * 3.28;
}

float total(float price) {
	if (price >= 100) {
		price *= 0.95;
	}
	return price;
}

int max(int a, int b) {
	if (a > b) return a;
	else return b;
}

int trimax(int a, int b, int c) {
	if (a > b && a > c) return a;
	else if (b > a && b > c) return b;
	else return c;
}

float area(int x1, int y1, int x2, int y2, int x0, int y0) {
	if ( x0 >= x1 && x0 <= x2 && y0 >= y1 && y0 <= y2) return 1;
	else return 0;
}

float distance(int x1, int y1, int x2, int y2) {
	float result = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
	return result;
}

void paper(int width, int height) {
	if (width == height) {
		printf("Square\n");
	}
	else if (width > height) {
		printf("Landscape\n");
	}
	else {
		printf("Portrait\n");
	}
}

void frog(int height) {
	int distance = 0;
	int day = 0;
	while (distance <= height) {
		distance += 3;
		day++;
		if (distance >= height) {
			printf("%d\n", day);
			break;
		}
		distance--;
	}
}

int main() {
	//int result = f(5);
	//float result = convert(7.2);
	//printf("%f\n", result);
	
	//printf("%d\n", sizeof(long long));
	
	//printf("%f\n", total(120));
	
	//printf("%d\n", max(7,3));

	
	//printf("%d\n", trimax(3,5,5));
	
	//printf("%f\n", area(8,2,4,5,5,3));
	//printf("%f\n", distance(0,0,10,10));
	
	//for(int i = 0; i <= 20; i++) {
	//	if (i % 3 == 0 && i % 5 == 0) printf("Fizz Buzz\n");
	//	else if (i % 3 == 0) printf("Fizz\n");
	//	else if (i % 5 == 0) printf("Buzz\n");
	//	else printf("%d\n", i);
	//}
	
	
	int n;
	scanf("%d", &n);
	
	for(int i = 1; i <= n; i++) {
		if ( n % i == 0) printf("%d\n", i);
	}

	
	return 0;
}
