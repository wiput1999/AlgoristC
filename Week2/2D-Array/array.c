#include <stdio.h>

int number[100][100];
int result[100];
int row,col;

int main() {

    scanf("%d %d", &row, &col);
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            scanf("%d", &number[i][j]);
        }
    }

    for(int i = 0; i < row; i++) {
        int temp = 0;
        for(int j = 0; j < col; j++) {
            temp += number[i][j];
        }
        result[i] = temp;
    }

    for(int i = 0; i < row; i++) {
        printf("%d\n", result[i]);  
    }

    return 0;
}
