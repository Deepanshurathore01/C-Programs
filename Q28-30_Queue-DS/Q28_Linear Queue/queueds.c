#include <stdio.h>
#include <stdlib.h>


int queue[100],MAX_SIZE, item, front = -1, rear = -1;

void qdelete();
void qinsert();
void qdisplay();

int main() {
    int choice;
    char ch;
    printf("Enter the size of a queue: ");
    scanf("%d", &MAX_SIZE);

    do {
        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Display");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                qinsert();
                break;
            case 2:
                qdelete();
                break;
            case 3:
                qdisplay();
                break;
            case 4:
                exit(0);
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

void qinsert() {
    if (rear == MAX_SIZE - 1) {
        printf("Queue is full!");
        return;
    } else if (front == -1) {
        front = 0;
        rear = 0;
    } else {
        rear = rear + 1;
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &item);
    queue[rear] = item;
}

void qdelete() {
    if (front == -1) {
        printf("Queue is empty!");
        return;
    }

    item = queue[front];
    printf("\nThe deleted item in the queue is: %d", item);

    if (front == rear) {
        front = -1;
        rear = -1;
    } else {
        front = front + 1;
    }
}

void qdisplay() {
    if (front == -1) {
        printf("\nNo elements present in the queue to display.");
        return;
    }

    printf("\nElements in the queue are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
}
