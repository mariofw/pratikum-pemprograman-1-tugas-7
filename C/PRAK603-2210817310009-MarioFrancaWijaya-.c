#include <stdio.h>

int main(){
   int baris1, baris2, i, hasil;
   scanf("%d %d", &baris1, &baris2);
   if(baris1!=baris2){
    printf("Jumlah tidak sama");
    }
    int angka1[baris1];
    int angka2[baris2];
    for(i=0; i<baris1; i++){
        scanf("%d", &angka1[i]);
    }
    for(i=0; i<baris2; i++){
        scanf("%d", &angka2[i]);
    }
    for(i=0; i<baris1; i++){
        hasil = angka1[i] * angka2[i];
        printf("%d ", hasil);
    }
}