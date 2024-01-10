#include <stdio.h>
#include <stdlib.h>

int cqueue[50], item, front = -1, rear = -1, maxsize, i;

void cqdelete();
void cqinsert();
void cqdisplay();

int main() {
    int n;
    char ch;
    printf("Enter the size of a queue: ");
    scanf("%d", &maxsize);

    do {
        printf("\n1 for insertion");
        printf("\n2 for deletion");
        printf("\n3 for display");

        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                cqinsert();
                break;
            case 2:
                cqdelete();
                break;
            case 3:
                cqdisplay();
                break;
            default:
                printf("\nInvalid choice!");
                break;
        }

        printf("\nDo you want to Continue (y/n): ");
        fflush(stdin);
        scanf(" %c", &ch);
    } while (ch == 'y' || ch == 'Y');

    return 0;
}

void cqinsert() {
    if ((front == 0 && rear == maxsize - 1) || (rear + 1 == front)) {
        printf("Queue is full!");
        return;
    }

    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (rear == maxsize - 1) {
        rear = 0;
    } else {
        rear = rear + 1;
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &item);
    cqueue[rear] = item;
}

void cqdelete() {
    if (front == -1) {
        printf("Queue is empty!");
        return;
    }

    item = cqueue[front];
    printf("The deleted item in the queue is: %d", item);

    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == maxsize - 1) {
        front = 0;
    } else {
        front = front + 1;
    }
}

void cqdisplay() {
    if (front == -1) {
        printf("\nQueue is empty!");
        return;
    }

    printf("\nElements in circular queue are: ");

    if (rear >= front) {
        for (i = front; i <= rear; i++) {
            printf("%d ", cqueue[i]);
        }
    } else {
        for (i = front; i < maxsize; i++) {
            printf("%d ", cqueue[i]);
        }

        for (i = 0; i <= rear; i++) {
            printf("%d ", cqueue[i]);
        }
    }
}
