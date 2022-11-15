#include <stdio.h>

int main(){
    int angka, i;
    scanf("%d", &angka);
    int zetsu[angka];
    for(i=0; i<angka; i++){
        scanf("%d", &zetsu[i]);
    }
    for(i=0; i<angka; i++){
        printf("%d ", zetsu[i] * (i + 1));
    }
}