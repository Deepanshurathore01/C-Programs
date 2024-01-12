#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

int top = -1;
int stack[MAX];

void push(int x) {
    stack[++top] = x;
}

int pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

void evaluatePostfix(char postfix[MAX]) {
    int i = 0, operand, A, B;
    char symbol;

    while (postfix[i] != '\0') {
        symbol = postfix[i];

        if (isdigit(symbol)) {
            // If operand, push it onto the stack
            operand = symbol - '0';
            push(operand);
        } else {
            // If operator, pop two operands, evaluate, and push the result back
            A = pop();
            B = pop();

            switch (symbol) {
                case '+':
                    push(B + A);
                    break;
                case '-':
                    push(B - A);
                    break;
                case '*':
                    push(B * A);
                    break;
                case '/':
                    push(B / A);
                    break;
                case '^':
                    push(B ^ A);
                    break;
                default:
                    printf("Invalid operator encountered.\n");
                    exit(1);
            }
        }
        i++;
    }

    // The final result is at the top of the stack
    printf("Result: %d\n", pop());
}

int main() {
    char postfix[MAX];

    printf("Enter the postfix expression:\n");
    scanf("%s", &postfix);

    // Evaluate the postfix expression
    evaluatePostfix(postfix);

    return 0;
}
