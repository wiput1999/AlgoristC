#include <stdio.h>

int main() {
	for(int i = 1; i <= 100000; i++) {
		int result = 0;
		for(int j = 1; j < i; j++) {
			if( i % j == 0) {
				result += j;
			}
		}
		if (result == i) printf("%d\n", i);
	}
	
	return 0;

}
