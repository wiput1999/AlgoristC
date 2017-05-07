#include <stdio.h>
#include <stdlib.h>

int main() {
	int score[5] = {9,8,7,7,10};

	int min = score[0];	
	int max = score[0];
	int result = 0;

	for( int i = 0; i < 5; i++) {
		if ( score[i] <= min ) {
			min = score[i];
 		}
	}

	for ( int i = 0; i < 5; i++ ) {
		if ( score[i] >= max ) {
			max = score[i];
		}
	}

	for ( int i = 0; i < 5; i++ ) {
		result += score[i];
	}
	
	result -= (max + min);

	printf("%d", result);

	return 0;
}
