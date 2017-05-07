#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *s) {
    // char temp[100];
    char t;
    for(int i = strlen(s)-1; i >= strlen(s)/2; i--) {
        char t = s[i];
        s[i] = s[strlen(s)-1-i];
        s[strlen(s)-1-i] = t;
    }
    // strcpy(s,temp);

}

int main() {

    char str[100];
    printf("Enter string : ");
    gets(str);

    reverse(str);

    printf("%s\n", str);

    return 0;
}