#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int id;
    char name[100];
    struct student *left, *right;
};

void print(struct student *node) {
    if(node->left != NULL) {
        print(node->left);
    }
    printf("%d %s\n", node->id, node->name);
    if(node->right != NULL) {
        print(node->right);
    }
}

struct student *add(struct student *node, int id, char *name) {
    if(node == NULL) {
        node = malloc(sizeof(struct student));
        strcpy(node->name, name);
        node->id = id;
        node->left = node->right = NULL;
    } else {
        if(node->id > id) {
            node->left = add(node->left, id, name);
        } else if(node->id < id) {
            node->right = add(node->right, id, name);
        }
    }
    return node;
}

int main() {
    struct student *root = NULL;
    root = add(root, 85, "Bill");
    root = add(root, 27, "Mark");
    root = add(root, 48, "Sheryl");
    root = add(root, 92, "Elon");
    print(root);

    return 0;
}