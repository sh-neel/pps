#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// Stack for operators (we'll use a simple array)
char stack[MAX];
int top = -1;

// Function to check precedence of operators
int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    if (op == '*' || op == '/') {
        return 2;
    }
    if (op == '^') {
        return 3;
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Function to push to the stack
void push(char c) {
    if (top == (MAX - 1)) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = c;
}

// Function to pop from the stack
char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

// Function to get the top element of the stack without popping
char peek() {
    if (top == -1) {
        return '\0';
    }
    return stack[top];
}

// Function to convert infix to postfix
void infixToPostfix(char *infix, char *postfix) {
    int i = 0, k = 0;
    char c;

    while ((c = infix[i++]) != '\0') {
        // If character is an operand, add to the postfix expression
        if (isalnum(c)) {
            postfix[k++] = c;
        }
        // If '(' is encountered, push it to the stack
        else if (c == '(') {
            push(c);
        }
        // If ')' is encountered, pop and append to postfix until '(' is found
        else if (c == ')') {
            while (top != -1 && peek() != '(') {
                postfix[k++] = pop();
            }
            if (top != -1 && peek() == '(') {
                pop(); // Remove '(' from the stack
            } else {
                printf("Invalid expression: Mismatched parentheses\n");
                exit(1);
            }
        }
        // If operator is encountered, process based on precedence
        else if (isOperator(c)) {
            while (top != -1 && precedence(peek()) >= precedence(c)) {
                // For right-associative '^', do not pop if top is '^'
                if (c == '^' && peek() == '^') {
                    break;
                }
                postfix[k++] = pop();
            }
            push(c);
        }
        // Ignore spaces
        else if (c == ' ' || c == '\t') {
            continue;
        }
        else {
            printf("Invalid character in expression: %c\n", c);
            exit(1);
        }
    }

    // Pop all remaining operators from the stack
    while (top != -1) {
        if (peek() == '(' || peek() == ')') {
            printf("Invalid expression: Mismatched parentheses\n");
            exit(1);
        }
        postfix[k++] = pop();
    }

    postfix[k] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression: ");
    fgets(infix, MAX, stdin);

    // Remove the trailing newline character if it exists
    infix[strcspn(infix, "\n")] = '\0';

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
