#include <stdio.h>

int main() {
	int number;
	scanf("%d", &number);
	
	int i = 2;
	while (1) {
		//printf("%d\n", number);
		if ( number % i == 0) {
			printf(" %d ", i);
			number /= i;
		}
		else {
			i++;
		}
		if (number == 1) break;
		
	}
	
	return 0;
}
