#include <stdio.h>
#define MAX 100

int queue[MAX];
int front = -1;
int rear = -1;

int isEmpty() {
    return (front == -1 || front > rear);
}

int isFull() {
    return (rear == MAX - 1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue Overflow! Cannot insert %d\n", value);
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = value;
    printf("%d enqueued to the queue\n", value);
}

int dequeue() {
    if (isEmpty()) {
        printf("Queue Underflow! Cannot dequeue.\n");
        return -1;
    }
    int value = queue[front];
    front++;
    if (front > rear) {
        front = rear = -1;
    }
    return value;
}

void display() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return;
    }
    printf("Queue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int main() {

    printf("NAME: Neel Shah\n");
    printf("En No: 240410107090\n");
    
    int choice, value;

    while (1) {
        printf("\n--- Queue Operations Menu ---\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                value = dequeue();
                if (value != -1)
                    printf("Dequeued element: %d\n", value);
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}
