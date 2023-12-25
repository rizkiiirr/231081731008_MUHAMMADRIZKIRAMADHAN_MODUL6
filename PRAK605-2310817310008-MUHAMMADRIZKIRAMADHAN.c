#include <stdio.h>

void perkalianmatriks(int ordo, int matriksA[ordo][ordo], int matriksB[ordo][ordo], int hasil[ordo][ordo]){
    for (int i = 0; i < ordo; i++){
        for (int j = 0; j < ordo; j++){
            hasil[i][j] = 0;
            for (int k = 0; k < ordo; k++){
                hasil[i][j] += matriksA[i][k] * matriksB[k][j];
            }
        }
        
    }
}
int main(){
    int ordo;
    printf(" ");
    scanf("%d", &ordo);

    int matriksA[ordo][ordo], matriksB[ordo][ordo], hasil[ordo][ordo];

    printf("Matriks A");
        for (int i = 0; i < ordo; i++){
            for (int j = 0; j < ordo; j++){
                scanf("%d", &matriksA[i][j]);
            }
        }
    printf("Matriks B");
        for (int i = 0; i < ordo; i++){
            for (int j = 0; j < ordo; j++){
                scanf("%d", &matriksB[i][j]);
            }
        }
        perkalianmatriks(ordo, matriksA, matriksB, hasil);

    printf("Matriks AxB\n");
        for (int i = 0; i < ordo; i++){
            for (int j = 0; j < ordo; j++){
                printf("%d ", hasil[i][j]);
            }
            printf("\n");
        }
    return 0;
}