#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int stack[MAX]; 
int top = -1;        


int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX - 1;
}


void push(int value) {
    if (isFull()) {
       
        printf("Stack Overflow! Cannot push %d\n", value);
    } 
    else {
      
        top++;
        stack[top] = value;
        printf("%d pushed into the stack\n", value);
    }
}

int pop() {
    if (isEmpty()) {
        
        printf("Stack Underflow! Cannot pop\n");
        return -1;
    } else {
        int poValue = stack[top];
        top--;
        printf("%d popped from the stack\n", poValue);
        return poValue;
    }
}
int peek() {
    if (isEmpty()) {
       
        printf("Stack is empty, cannot peek\n");
        return -1;
    } 
    else {
        return stack[top];
    }
}


void display() {
    if (isEmpty()) {
       
        printf("Stack is empty\n");
    } else {
        
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
void change(int index, int newValue) {
    if (isEmpty()) {
        printf(" Stack is empty\n");
        return -1;
    }
   else if (index <= 0 || index > (top + 1)) { 
        printf("Invalid index for change operation.\n");
        return;
    }
    
    stack[top - index + 1] = newValue; 
    printf("Element at index %d changed to %d.\n", index, newValue);
}
int peep(int position){
    if( isEmpty()) {
        printf("stack is empty");
        return -1;
    }

    int index = top - position + 1;
    if( index < 0 || index >top){

        printf(" invalid position.");
        return -1;
    }

    return stack[index];
    
}

int main()
{
    printf("NAME: Neel Shah\n");
    printf("En No: 240410107090\n");
    
    push(1);  
    push(2); 
    push(3); 

    display();

    pop();    
    display(); 

    printf("Top element: %d\n", peek());

    push(4);
    push(5);
    push(6);
    push(7);
    push(11);
    push(10);

    peep(3);

    display(); 

    pop();
    pop();

    printf("Top element: %d\n", peek());

    push(69);  

    display();

    change(2,3);
    change(4,18);

    display();

    pop();
    pop();

    printf(" enlement at 2nd position: %d\n",peep(2));

    pop();
    pop();
    pop();
    pop();

    return 0; 
}