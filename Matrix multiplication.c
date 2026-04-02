#include <stdio.h>

int main() {
   int A[3][4],B[4][2],C[3][2];
   int i,j,k;
    printf("Enter the elements of matrix A(3*4):\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&A[i][j]);
            
        }
    }
    printf("Enter the elements of matrix B(4*2):\n");
    for(i=0;i<4;i++) {
        for(j=0;j<2;j++){
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            C[i][j]=0;
        }
    }
    for(i=0;i<3;i++) {
        for(j=0;j<2;j++){
        for(k=0;k<4;k++){
            C[i][j] +=A[i][k]*B[k][j];
        }
        }
    }
        
    printf("Resltant Matrix (3*2):\n");
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
    printf("%d\t",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
