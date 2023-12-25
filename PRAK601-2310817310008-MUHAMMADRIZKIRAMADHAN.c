#include <stdio.h>

void matriks(int baris, int kolom, int data []){
  int mat [baris][kolom];
  int indeks = 0;

  for (int i = 0; i < baris; i++){
    for (int j = 0; j < kolom; j++){
      mat[i][j] = data[indeks];
      indeks++;
    }
  }
  for (int i =  0; i < baris; i++){
    for (int j = 0; j < kolom; j++){
      printf("%d ", mat[i][j]);
    }
    printf("\n");
  }
}
  int main(){
    int baris, kolom;
    printf(" ");
    scanf("%d %d", &baris, &kolom);

    int jumlahdata = baris * kolom;
    int data [jumlahdata];

    printf(" ");
    for(int i = 0; i < jumlahdata; i++){
      scanf("%d", &data[i]);
    }
    matriks(baris, kolom, data);

    return 0;
  }