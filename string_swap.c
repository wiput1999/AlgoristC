#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char *s,char *t) {
	char temp[100];
	strcpy(temp,s);
	strcpy(s,t);
	strcpy(t,temp);
}

int main() {

	char m[100];
	strcpy(m,"Mark Z");
	char b[100];
	strcpy(b,"Bill G");

	swap(m,b);

	printf("%s\n%s\n", m, b);

	return 0;
}
