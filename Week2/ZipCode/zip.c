#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[100][100];
char search[100];
int zip[100],i,n;

int main() {

    scanf("%s", search);
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s", name[i]);
        scanf("%d", &zip[i]);
    }

    for(i = 0; i < n; i++) {
        if(strcmp(name[i],search) == 0) {
            break;
        }
    }

    printf("Zipcode is %d\n", zip[i]);


    return 0;
}