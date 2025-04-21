#include <stdio.h>

int main() {
    float A[4][4];
    int i, j;
    float sum, magicSum = 0;
    int isMagic = 1;

    printf("Vvedit elementy matrytsi 4x4:\n");
    for (i = 0; i < 4; i+=1){
        for (j = 0; j < 4; j+=1){
            scanf("%f", &A[i][j]);
        }
    }
    
    for (j = 0; j < 4; j+=1){
        magicSum += A[0][j];
    }

    for (i = 0; i < 4 && isMagic; i+=1) {
        float rowSum = 0, colSum = 0;
        for (j = 0; j < 4; j+=1) {
            rowSum += A[i][j];
            colSum += A[j][i];
        }
        if (rowSum != magicSum || colSum != magicSum)
            isMagic = 0;
    }

    float diag1 = 0, diag2 = 0;
    for (i = 0; i < 4; i+=1) {
        diag1 += A[i][i];
        diag2 += A[i][3 - i];
    }
    if (diag1 != magicSum || diag2 != magicSum)
        isMagic = 0;

    printf("\nMatrystia %s magichnym kvadratom.\n", isMagic ? "YE" : "NE ye");

    return 0;
}