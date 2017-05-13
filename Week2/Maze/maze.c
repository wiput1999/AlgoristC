#include <stdio.h>

char maze[100][100];
char buffer[100];
char w_row[10000],w_col[10000],w_parent[10000];
int row,col,st_row,st_col,f_row,f_col;
int front = 0;
int rear = 1;

int main() {

    scanf("%d %d", &row, &col);
    for(int i = 0; i < row; i++) {
        scanf("%s", buffer);
        for(int j = 0; j < col; j++) {
            maze[i][j] = buffer[j];
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(maze[i][j] == 'S') {
                st_row = i;
                st_col = j;
            }
            if(maze[i][j] == 'F') {
                f_row = i;
                f_col = j;
                maze[i][j] = '.';
            }
        }
    }

    w_row[0] = st_row;
    w_col[0] = st_col;
    w_parent[0] = -1;

    while(1) {
        printf("%d %d %d %d\n",front , w_row[front], w_col[front], w_parent[front]);
        if(w_row[front] == f_row && w_col[front] == f_col) {
            printf("Finished!\n");
            break;
        } //Finish 
        if(maze[w_row[front] - 1][w_col[front]] == '.') { //Up .
            w_row[rear] = w_row[front] - 1;
            w_col[rear] = w_col[front];
            if(maze[w_row[front] - 1][w_col[front]] != 'F') {
                maze[w_row[front] - 1][w_col[front]] = '#';
            }
            w_parent[rear] = front;
            rear++;
        }
        if(maze[w_row[front] + 1][w_col[front]] == '.') { //Down .
            w_row[rear] = w_row[front] + 1;
            w_col[rear] = w_col[front];
            if(maze[w_row[front] + 1][w_col[front]] != 'F') {
                maze[w_row[front] + 1][w_col[front]] = '#';
            }
            w_parent[rear] = front;
            rear++;
        }
        if(maze[w_row[front]][w_col[front] - 1] == '.') { //Left .
            w_row[rear] = w_row[front];
            w_col[rear] = w_col[front] - 1;
            if(maze[w_row[front]][w_col[front] - 1] != 'F') {
                maze[w_row[front]][w_col[front] - 1] = '#';
            }
            w_parent[rear] = front;
            rear++;
        }
        if(maze[w_row[front]][w_col[front] + 1] == '.') { //Right .
            w_row[rear] = w_row[front];
            w_col[rear] = w_col[front] + 1;
            if(maze[w_row[front]][w_col[front] + 1] != 'F') {
                maze[w_row[front]][w_col[front] + 1] = '#';
            }
            w_parent[rear] = front;
            rear++;
        }
        front++;
    }

    // for(int i = 0; i <= rear; i++) {
    //     printf("%d %d %d\n", w_row[i], w_col[i], w_parent[i]);
    // }

    return 0;
}
