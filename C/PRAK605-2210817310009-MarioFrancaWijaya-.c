#include <stdio.h>

int main(){
    int matriksA[10][10], MatriksB[10][10], MatriksAXB[10][10];
    int i, j, k, n, jumlah=0;
    scanf("%d", &n);
    printf("Matriks A\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matriksA[i][j]);
        }
    }
    printf("Matriks B\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &MatriksB[i][j]);
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            for(k=0; k<n; k++){
                jumlah = jumlah + matriksA[i][k] * MatriksB[k][j];
            }
            MatriksAXB[i][j] = jumlah;
            jumlah = 0;
        }
    }
    printf("Matriks AXB\n");
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ", MatriksAXB[i][j]);
        }
        printf("\n");
    }
}