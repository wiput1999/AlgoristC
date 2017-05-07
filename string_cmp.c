#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

	char name[50],*cmp_name = "Mark Zuckerburg";

	printf("Enter your name : ");
	gets(name);

	if(strcmp(name,cmp_name) == 0) printf("Could you give me $1,000,000\n");
	else printf("Hello, %s!\n", name);

	return 0;
}
