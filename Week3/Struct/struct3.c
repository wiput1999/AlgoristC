#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[100];
    float score;    
};

int main() {
    struct student *S[100];
    char buffer[100];
    int n;
    
    scanf("%d", &n);
    for(int i = 0; i < n; i++ ) {
        S[i] = malloc(sizeof(struct student));
        scanf("%s", buffer);
        strcpy(S[i]->name, buffer);
        scanf("%f", &S[i]->score);
    }
    for(int i = 0; i < n; i++ ) {
        printf("%s %f\n", S[i]->name, S[i]->score);
        free(S[i]);
    }

}