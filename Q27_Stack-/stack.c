#include <stdio.h>
#include<conio.h>

int stack[100];
int top = -1;
int n;

void push();
void pop();
void peek();
void display();

int main() {
    int choice ;
    char continueChoice;

    printf("Enter the size of the stack: ");
    scanf("%d",&n);

    do {
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Peek");
        printf("\n4. Display");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            default:
                printf("Invalid choice! Please enter a valid option.");
                break;
        }

        printf("\nDo you want to continue (y/n)? ");
        scanf(" %c", &continueChoice);
    } while (continueChoice == 'y' || continueChoice == 'Y');

    return 0;
}

void push() {
    int value;
    if (top == n - 1)
        printf("\nStack Overflow");
    else {
        printf("Enter the value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }
}

void pop() {
    if (top == -1)
        printf("\nStack Underflow");
    else
    printf("poped element is :%d",stack[top]);
        top--;
}

void display() {
    if (top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nStack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

void peek() {
    if (top == -1) {
        printf("\nStack Underflow");
    } else {
        printf("\nTop element: %d", stack[top]);
    }
}
