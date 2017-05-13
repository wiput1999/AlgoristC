#include <stdio.h>

char grid[100][100];
int size;
char buffer[100];

int main() {

    scanf("%d", &size);
    for(int i = 0; i < size; i++) {
        for(int j = 0; j < size; j++) {
            scanf("%s", buffer);
            grid[i][j] = buffer[0];
        }
    }

    for(int j = 0; j < size; j++) {
        for(int i = size - 1; i >= 0; i--) {
            printf("%c ", grid[i][j]);
        }
        printf("\n");
    }

    return 0;
}
