#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Stack {
    int top;
    double* array;
};

void push(struct Stack* stack, double x) {
    stack->array[++stack->top] = x;
}

double pop(struct Stack* stack) {
    if (stack->top == -1)
        return -1;
    else
        return stack->array[stack->top--];
}

int isOperand(char c) {
    // If the character is a digit then it must be an operand
    return isdigit(c);
}

double evaluatePrefix(char exprsn[]) {
    struct Stack stack;
    stack.top = -1;
    stack.array = (double*)malloc(strlen(exprsn) * sizeof(double));

    for (int j = strlen(exprsn) - 1; j >= 0; j--) {
        if (isOperand(exprsn[j]))
            push(&stack, exprsn[j] - '0');
        else {
            double o1 = pop(&stack);
            double o2 = pop(&stack);

            switch (exprsn[j]) {
            case '+':
                push(&stack, o1 + o2);
                break;
            case '-':
                push(&stack, o1 - o2);
                break;
            case '*':
                push(&stack, o1 * o2);
                break;
            case '/':
                push(&stack, o1 / o2);
                break;
            case '^':
                push(&stack, o1 ^ o2);
                break;
            }
        }
    }

    return pop(&stack);
}

int main() {
    char exprsn[] = "*+69-31";
    printf("%.2f\n", evaluatePrefix(exprsn));
    return 0;
}
