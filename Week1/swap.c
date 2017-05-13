#include <stdlib.h>
#include <stdio.h>

void swap(int *p,int *q) {
	int t = *p;
	*p = *q;
	*q = t;
}

int main() {
	int a = 7;
	int b = 5;

	swap(&a,&b);
	
	printf("%d %d", a, b);

	return 0;
}
