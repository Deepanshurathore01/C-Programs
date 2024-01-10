#include<stdio.h>
#include<stdlib.h>

int deque[50], f = -1, r = -1, size;

void insert_front(int x);
void insert_rear(int x);
void delete_front();
void delete_rear();
void display();

int main() {
    int n;
    char ch;
    
    printf("Enter the size of the deque: ");
    scanf("%d", &size);

    do {
        printf("\n1 for insertion at front end");
        printf("\n2 for insertion at rear end");
        printf("\n3 for deletion from front end");
        printf("\n4 for deletion from rear end");
        printf("\n5 for display");

        printf("\nEnter your choice: ");
        scanf("%d", &n);

        switch(n) {
            case 1:
                printf("\nEnter the element to insert at front end: ");
                scanf("%d", &ch);
                insert_front(ch);
                break;
            case 2:
                printf("\nEnter the element to insert at rear end: ");
                scanf("%d", &ch);
                insert_rear(ch);
                break;
            case 3:
                delete_front();
                break;
            case 4:
                delete_rear();
                break;
            case 5:
                display();
                break;
            default:
                printf("Invalid choice!");
                break;
        }

        printf("\nDo you want to continue? (y/n): ");
        fflush(stdin);
        scanf(" %c", &ch);
    } while(ch == 'y' || ch == 'Y');

    return 0;
}

void insert_front(int x) {
    if ((f == 0 && r == size - 1) || (f == r + 1)) {
        printf("Overflow");
    } else if (f == -1 && r == -1) {
        f = r = 0;
        deque[f] = x;
    } else if (f == 0) {
        f = size - 1;
        deque[f] = x;
    } else {
        f = f - 1;
        deque[f] = x;
    }
}

void insert_rear(int x) {
    if ((f == 0 && r == size - 1) || (f == r + 1)) {
        printf("Overflow");
    } else if (f == -1 && r == -1) {
        r = 0;
        deque[r] = x;
    } else if (r == size - 1) {
        r = 0;
        deque[r] = x;
    } else {
        r++;
        deque[r] = x;
    }
}

void delete_front() {
    if (f == -1 && r == -1) {
        printf("Deque is empty");
    } else if (f == r) {
        printf("\nThe deleted element is %d", deque[f]);
        f = -1;
        r = -1;
    } else if (f == size - 1) {
        printf("\nThe deleted element is %d", deque[f]);
        f = 0;
    } else {
        printf("\nThe deleted element is %d", deque[f]);
        f = f + 1;
    }
}

void delete_rear() {
    if (f == -1 && r == -1) {
        printf("Deque is empty");
    } else if (f == r) {
        printf("\nThe deleted element is %d", deque[r]);
        f = -1;
        r = -1;
    } else if (r == 0) {
        printf("\nThe deleted element is %d", deque[r]);
        r = size - 1;
    } else {
        printf("\nThe deleted element is %d", deque[r]);
        r = r - 1;
    }
}

void display() {
    int i = f;
    printf("\nElements in a deque are: ");

    while (i != r) {
        printf("%d ", deque[i]);
        i = (i + 1) % size;
    }
    printf("%d", deque[r]);
}
