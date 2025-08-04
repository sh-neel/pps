#include <stdio.h>

// Recursive function to solve Tower of Hanoi
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    // Move top n-1 disks from from_rod to aux_rod using to_rod as auxiliary
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    // Move the nth disk from from_rod to to_rod
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);

    // Move the n-1 disks from aux_rod to to_rod using from_rod as auxiliary
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    printf("The sequence of moves involved in the Tower of Hanoi are:\n");
    towerOfHanoi(n, 'A', 'C', 'B');  // A, B and C are names of rods
    return 0;
}