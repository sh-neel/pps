#include <stdio.h>

float PI = 3.14;
int secondary();

int main(){
    int local = 37;
    printf("global: %.2f, local: %d\n", PI, local);
    secondary();
}

int secondary(){
    int local = 89;
    printf("global: %.2f, local: %d\n", PI, local);
}