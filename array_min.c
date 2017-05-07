#include <stdlib.h>
#include <stdio.h>

int main() {
	int number[3] = {3,5,1};
	int min = number[0];
	
	for( int i = 0; i < 3; i++) {
		if (number[i] <= min) {
			min = number[i];
		}
	}
	
	printf("%d\n", min);
	
	return 0;
}
