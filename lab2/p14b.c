#include<stdio.h>

int main(){
    int number = 5;
    
    for (int c = 1; c <= number; c++){
        for (int r = 5; r >c; r--){
            printf("  ");
        }
        for (int r = 1; r <= c; r++){
          printf("* ");
        }
        printf("\n");
    }
}