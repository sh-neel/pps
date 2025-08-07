#include <stdio.h>

#define MAX 10 

int A[MAX], B[MAX], C[MAX]; 
int topA = -1, topB = -1, topC = -1;

void push(int tower[], int *top, int disk) {
    tower[++(*top)] = disk;
}


int pop(int tower[], int *top) {
    return tower[(*top)--];
}

void printTowers() {
    printf("Tower A: ");
    for (int i = 0; i <= topA; i++)
        printf("%d ", A[i]);
    printf("\n");

    printf("Tower B: ");
    for (int i = 0; i <= topB; i++)
        printf("%d ", B[i]);
    printf("\n");

    printf("Tower C: ");
    for (int i = 0; i <= topC; i++)
        printf("%d ", C[i]);
    printf("\n");

    printf("---------------------\n");
}


void moveDisk(char from, char to) {
    int disk;
    if (from == 'A') disk = pop(A, &topA);
    else if (from == 'B') disk = pop(B, &topB);
    else disk = pop(C, &topC);

    if (to == 'A') push(A, &topA, disk);
    else if (to == 'B') push(B, &topB, disk);
    else push(C, &topC, disk);

    printf("Move disk %d from %c to %c\n", disk, from, to);
    printTowers();
}

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        moveDisk(source, destination);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary);
    moveDisk(source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;

    printf("Enter number of disks (max %d): ", MAX);
    scanf("%d", &n);

    for (int i = n; i >= 1; i--) {
        push(A, &topA, i);
    }

    printf("\nInitial State:\n");
    printTowers();

    towerOfHanoi(n, 'A', 'B', 'C');

    return 0;
}