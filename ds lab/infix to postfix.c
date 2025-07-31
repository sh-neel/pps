#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100


typedef struct {
    char items[MAX];
    int top;
} Stack;

void init(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, char c) {
    if (isFull(s)) {
        printf("Stack overflow\n");
        exit(1);
    }
    s->items[++(s->top)] = c;
}

char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return s->items[(s->top)--];
}

char peek(Stack *s) {
    if (isEmpty(s)) {
        return '\0';
    }
    return s->items[s->top];
}


int precedence(char op) {
    switch (op) {
        case '+':
        case '-': return 1;
        case '*':
        case '/': return 2;
        case '^': return 3;
        default: return 0;
    }
}


int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}


void infixToPostfix(char* infix, char* postfix) {
    Stack stack;
    init(&stack);
    int i = 0, k = 0;
    char c;

    while ((c = infix[i++]) != '\0') {
        if (isalnum(c)) {
          
            postfix[k++] = c;
        }
        else if (c == '(') {
            push(&stack, c);
        }
        else if (c == ')') {
            
            while (!isEmpty(&stack) && peek(&stack) != '(') {
                postfix[k++] = pop(&stack);
            }
            if (!isEmpty(&stack) && peek(&stack) == '(')
                pop(&stack);
            else {
                printf("Invalid expression: Mismatched parentheses\n");
                exit(1);
            }
        }
        else if (isOperator(c)) {
            while (!isEmpty(&stack) && precedence(peek(&stack)) >= precedence(c)) {
               
                if (c == '^' && peek(&stack) == '^')
                    break;
                postfix[k++] = pop(&stack);
            }
            push(&stack, c);
        }
        else if (c == ' ' || c == '\t') {
            
            continue;
        }
        else {
            printf("Invalid character: %c\n", c);
            exit(1);
        }
    }
   
    while (!isEmpty(&stack)) {
        if (peek(&stack) == '(' || peek(&stack) == ')') {
            printf("Invalid expression: Mismatched parentheses\n");
            exit(1);
        }
        postfix[k++] = pop(&stack);
    }
    postfix[k] = '\0';
}

int main() {
    char infix[MAX], postfix[MAX];

    printf("Enter an infix expression: ");
    fgets(infix, MAX, stdin);
    
    infix[strcspn(infix, "\n")] = '\0';

    infixToPostfix(infix, postfix);

    printf("Postfix expression: %s\n", postfix);

    return 0;
}
