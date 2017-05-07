#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int i;
	int ca = 0, cb = 0;
	char *s = "abbaab";

	for(i = 0; i < strlen(s);i++) {
		if (s[i] == 'a') ca++;
		if (s[i] == 'b') cb++;
	}

	printf("a = %d\nb = %d\n", ca, cb);

	return 0;
}
