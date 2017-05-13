#include <stdio.h>

char text[10] = "AA_BB";
char final[10] = "BB_AA";
int front = 0;
int rear = 1;
int space_loc;
char w[100][10];
char w_parent[10000];

void swap(char *p,char *q) {
    char t = *p;
    *p = *q;
    *q = t;
}

int main() {

    for(int i = 0; i < 5; i++) {
        if(text[i] == '_') {
            space_loc = i;
            break;
        }
    }

    // w[0] = text;
    // w_parent[0] = -1;

    // while(1) {
    //     if(text == "BB_AA") {
    //         printf("Finished!");
    //         break;
    //     }

    //     text = "BB_AA"

    //     front++;
    // }
    swap(&text[1], &text[2]);

    printf("%s", text); 

    return 0;
}