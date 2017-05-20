#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[100];
    float score;    
};

int main() {
    struct student *S;
    char buffer[100];
    // int n;
    S = malloc(sizeof(struct student));
    // scanf("%d", &n);
    scanf("%s", buffer);
    strcpy(S->name, buffer);
    scanf("%f", &S->score);
    printf("%s %f\n", S->name, S->score);

}