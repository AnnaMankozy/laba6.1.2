#include <stdio.h>

int main() {
    float A[10][10], max;
    int B[10][10];
    int i, j, n;

    printf("Vvedit rozmir kvadratnoi matrytsi N (N <= 10): ");
    scanf("%d", &n);

    printf("Vvedit elementy matrytsi A[%d x %d]:\n", n, n);
    for (i = 0; i < n; i+=1) {
        for (j = 0; j < n; j+=1) {
            scanf("%f", &A[i][j]);
        }
    }

    max = A[0][0];
    for (i = 0; i < n; i+=1) {
        for (j = 0; j < n; j+=1) {
            if (A[i][j] > max)
                max = A[i][j];
        }
    }

    for (i = 0; i < n; i+=1) {
        for (j = 0; j < n; j+=1) {
            B[i][j] = (int)(A[i][j] / max);
        }
    }

    printf("\nMatrytsia B (tsila chastyna A[i][j] / max):\n");
    for (i = 0; i < n; i+=1) {
        for (j = 0; j < n; j+=1) {
            printf("%d\t", B[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}