#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

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

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

void push(char c) {
    if (top == (MAX - 1)) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

char peek() {
    if (top == -1) {
        return '\0';
    }
    return stack[top];
}

void infixToPostfix(char *infix, char *postfix) {
    int i = 0, k = 0;
    char c;

    while ((c = infix[i++]) != '\0') {
        if (isalnum(c)) {
            postfix[k++] = c;
        }
                else if (c == '(') {
            push(c);
        }        else if (c == ')') {
            while (top != -1 && peek() != '(') {
                postfix[k++] = pop();
            }
            if (top != -1 && peek() == '(') {
                pop(); 
            } else {
                printf("Invalid expression: Mismatched parentheses\n");
                exit(1);
            }
        }
        else if (isOperator(c)) {
            while (top != -1 && precedence(peek()) >= precedence(c)) {
                if (c == '^' && peek() == '^') {
                    break;
                }
                postfix[k++] = pop();
            }
            push(c);
        }
        else if (c == ' ' || c == '\t') {
            continue;
        }
        else {
            printf("Invalid character in expression: %c\n", c);
            exit(1);
        }
    }

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

    printf("NAME: Neel Shah\n");
    printf("En No: 240410107090\n");
    
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression: ");
    fgets(infix, MAX, stdin);

    infix[strcspn(infix, "\n")] = '\0';

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
