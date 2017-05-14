#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int number[MAX];
int front = -1;
int rear = -1;

void insert() { //Insert new item
    int add_item;
    if(rear == MAX - 1) {
        printf("Queue overflow!\n");
    } else {
        if(front == -1) front = 0; //Check empty queue

        printf("Insert number into queue : ");
        scanf("%d", &add_item);
        rear++;
        number[rear] = add_item;
    }
}

void delete() { //Delete queue item
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", number[front]);
        front++;
    }
}

void display() { //Display current queue
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", number[i]);
        printf("\n");
    }
}

int main() {

    int choice;
    while (1)
    {
        printf("1.Insert element to queue \n");
        printf("2.Delete element from queue \n");
        printf("3.Display all elements of queue \n");
        printf("4.Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(1);
            default:
                printf("Wrong choice \n");
        }
    }
}
