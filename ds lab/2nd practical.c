#include<stdio.h>
int main(){

    printf("NAME: Neel Shah\n");
    printf("En No: 240410107090\n");

    int m1[3][3],m2[3][3],add[3][3],sub[3][3],mult[3][3],i,j,k;

    printf("enter alliments in matrix one\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("eliment [%d][%d] : ",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d",m1[i][j]);
        }
        printf("\n");
    }

        printf("enter ellememns in  matrix two\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("element [%d][%d] : ",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d",m2[i][j]);
        }
        printf("\n");
    }

    printf("addition of matrix is :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            add[i][j] = m1[i][j] + m2[i][j];
            printf(" %d", add[i][j]); 
        }
        printf("\n");
    }

    printf("subtraction of matrix is :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            sub[i][j] = m1[i][j] - m2[i][j];
            printf(" %d",sub[i][j]);
        }
        printf("\n");
    }
     
    printf("multiplication of matrix is :\n");
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            mult[i][j] = 0;
            for(k = 0; k < 3; k++){
                mult[i][j] += m1[i][k]*m2[k][j];
            }
            printf(" %d",mult[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
}