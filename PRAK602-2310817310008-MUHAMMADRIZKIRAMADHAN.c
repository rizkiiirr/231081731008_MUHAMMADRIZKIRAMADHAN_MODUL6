#include <stdio.h>

int main(){
    int ruangan;
    printf(" ");
    scanf("%d", &ruangan);

    int zetsu[ruangan];
    printf(" ");
    for (int i = 0; i < ruangan; i++){
        scanf("%d", &zetsu[i]);
    }
    for (int i = 0; i < ruangan; i++){
        printf("%d ", zetsu[i] * (i + 1));
    }
    return 0;
}