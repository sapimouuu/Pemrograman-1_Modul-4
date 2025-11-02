#include<stdio.h>

int main(){
int pil=0;
float nil1,nil2,hasil;

while(pil != 5){
printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan : ");
scanf("%d", &pil);
if(pil==1){
    printf("Masukkan nilai pertama : ");
    scanf("%f", &nil1);
    printf("Masukkan nilai kedua : ");
    scanf("%f", &nil2);
    hasil = nil1+nil2;
    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f",nil1,nil2,hasil);
    printf("\n\n");
}else if(pil==2){
    printf("Masukkan nilai pertama : ");
    scanf("%f", &nil1);
    printf("Masukkan nilai kedua : ");
    scanf("%f", &nil2);
    hasil = nil1-nil2;
    printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f",nil1,nil2,hasil);
    printf("\n\n");
}else if(pil==3){
    printf("Masukkan nilai pertama : ");
    scanf("%f", &nil1);
    printf("Masukkan nilai kedua : ");
    scanf("%f", &nil2);
    hasil = nil1*nil2;
    printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f",nil1,nil2,hasil);
    printf("\n\n");
}else if(pil==4){
    printf("Masukkan nilai pertama : ");
    scanf("%f", &nil1);
    printf("Masukkan nilai kedua : ");
    scanf("%f", &nil2);
    hasil = nil1/nil2;
    printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f",nil1,nil2,hasil);
    printf("\n\n");
}else if(pil==5){
    printf("Terimakasih telah menggunakan Kalkulator Nurfitria Ramadhani");
}else{
    printf("Input anda salah, silakan coba lagi");
    printf("\n\n");
}
}
return 0;
}