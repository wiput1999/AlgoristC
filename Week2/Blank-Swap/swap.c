#include <stdio.h>
#include <string.h>

char text[10] = "AA_BB";
char final[10] = "BB_AA";
int front = 0;
int rear = 1;
int space_loc;
char w[100][10];
char w_parent[10000];
char buffer[100];

void swap(char *p,char *q) {
    char t = *p;
    *p = *q;
    *q = t;
}

int main() {

    // w[0] = text;
    w_parent[0] = -1;
    strcpy(w[0], &text);

    while(1) {

        for(int i = 0; i < 5; i++) {
            if(text[i] == '_') {
                space_loc = i;
                break;
            }
        }

        if(strcmp(&text, "BB_AA") == 0) {
            printf("Finished!\n");
            break;
        }


        strcpy(buffer, &text[front]);
        swap(&buffer[space_loc], &buffer[space_loc - 1]);
        for(int i = 0; i <= rear; i++) {
            if(strcmp(buffer,&w[i]) != 0) {
                rear++;
                strcpy(buffer, &w[rear]);
                break;
            }
        }

        front++;
    }
    

    printf("%s\n", text); 

    return 0;
}