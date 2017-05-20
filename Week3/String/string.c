/*
    Sort string in array by an Alphabetical Order
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[100][100], temp[100];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%s",temp);
        strcpy(name[i], temp);
    }

    for (int i = 0; i < n - 1 ; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%s\n", name[i]);
    }

    return 0;
}
