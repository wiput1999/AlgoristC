#include <stdlib.h>
#include <stdio.h>

void adjust(float *cal) {
	*cal *= 4.184;
}

int main() {
	float c = 300;

	adjust(&c);

	printf("%f\n", c);

	return 0;
}
