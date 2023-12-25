#include <stdio.h>

int main(){
    int pertama, kedua;
    printf(" ");
    scanf("%d %d", &pertama, &kedua);
    int baris1[pertama], baris2[kedua];
    if (pertama != kedua){
        printf("Jumlah tidak sama\n");
    }
    else{
        for (int i = 0; i < pertama; i++){
        scanf("%d", &baris1[i]);
        }
        for (int i = 0; i < kedua; i++){
        scanf("%d", &baris2[i]);
        }
        for (int i = 0; i < pertama; i++){
        printf("%d ", baris1[i] * baris2[i]);
        }
    }
    return 0;
}