#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {

	char *s = "NNEES";
	int d_a = 0; // N +1 , S -1
	int d_b = 0; // E +1 , W -1
	
	for( int i = 0; i < strlen(s); i++) {
		if(s[i] == 'N') d_a++;
		else if(s[i] == 'S') d_a--;
		else if(s[i] == 'E') d_b++;
		else if(s[i] == 'W') d_b--;
	}
	float result = sqrt((d_a * d_a) + (d_b * d_b));

	printf("%f\n", result);	

	return 0;
}
