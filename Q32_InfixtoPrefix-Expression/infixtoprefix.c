#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define MAX 100

int top = -1;
char stack[MAX];

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int precedence(char c) {
    if (c == ')')
        return 0;
    else if (c == '+' || c == '-')
        return 1;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '^')
        return 3;  
    return -1; // for invalid characters
}

void infixToPrefix(char infix[MAX], char prefix[MAX]) {
    char temp, x;
    int i = 0, j = 0;

    // Reverse the infix expression
    strrev(infix);

    while (infix[i] != '\0') {
        temp = infix[i];

        if (isalnum(temp)) {
            prefix[j++] = temp;
        } else if (temp == ')') {
            push(temp);
        } else if (temp == '(') {
            while ((x = pop()) != ')') {
                prefix[j++] = x;
            }
        } else {
            while (precedence(stack[top]) >= precedence(temp)) {
                prefix[j++] = pop();
            }
            push(temp);
        }
        i++;
    }

    // Pop and append remaining operators from the stack
    while (top != -1) {
        prefix[j++] = pop();
    }

    prefix[j] = '\0';
    // Reverse the prefix expression to get the final result
    strrev(prefix);
}

int main() {
    char infix[MAX], prefix[MAX];

    printf("Enter the infix expression:\n");
    gets(infix);

    printf("The infix expression is: %s\n", infix);

    infixToPrefix(infix, prefix);

    printf("The prefix expression is: %s\n", prefix);

    return 0;
}
