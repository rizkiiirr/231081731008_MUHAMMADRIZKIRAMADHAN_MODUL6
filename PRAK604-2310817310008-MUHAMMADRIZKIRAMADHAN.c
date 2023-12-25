#include <stdio.h>
#include <string.h>

int main(){
  char kalimat1[50], kalimat2[50];
  
  printf(" ");
  gets(kalimat1);
  printf(" ");
  gets(kalimat2);

  int a = strlen(kalimat1);
  int b = strlen(kalimat2);

  if(a == b){
    int bintang = 0, pagar = 0;
    for(int i = 0; i < a; i++){
      if (kalimat1[i]== ' '&&kalimat2[i]== ' '){
        printf(" ");
      }
      else if(kalimat1[i] == kalimat2[i]){
        printf("*");
        bintang++;
      }
      else{
        printf("#");
        pagar++;
      }
    }
    printf("\n");
   
      printf("* = %d\n# = %d\n", bintang, pagar);
      if (bintang >= pagar){
        printf("Pesan Asli");
      }
      else{
        printf("Pesan Palsu");
      }
  }
  else{
    printf("Panjang kalimat berbeda, pesan palsu");
  }
  return 0;
}