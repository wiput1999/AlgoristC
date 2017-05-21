//Heap calloc
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    char name[100];
    float score;    
};

int compare(const void * a, const void * b) {
    struct student *x = (struct student*) a;
    struct student *y = (struct student*) b;
    printf("Compare %f %f\n",x->score, y->score);
    if(x->score < y->score) {
        return -1;
    } else if(x->score > y->score) {
        return 1;
    }
    return 0;
}

int main() {
    struct student *S;
    char buffer[100];
    int n;
    
    scanf("%d", &n);
    S = calloc(n, sizeof(struct student));
    for(int i = 0; i < n; i++ ) {
        scanf("%s", buffer);
        strcpy(S[i].name, buffer);
        scanf("%f", &S[i].score);
    }
    
    qsort(S, n, sizeof(struct student), compare);

    for(int i = 0; i < n; i++ ) {
        printf("%s %f\n", S[i].name, S[i].score);
    }

}