#include <stdio.h>

void exchange(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    printf("Inside exchange:\n");
    printf("x = %d, y = %d\n", x, y);
}

int main() {
    printf("NAME: Neel Shah\n");
    printf("En No: 240410107090\n");

    int first = 10;
    int second = 20;

    printf("Before exchange:\n");
    printf("first = %d, second = %d\n", first, second);

    exchange(first, second);

    printf("After exchange:\n");
    printf("first = %d, second = %d\n", first, second);

    return 0;
}
