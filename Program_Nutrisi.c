#include <stdio.h>

int main(){

    int nutrisi = 0;
    int x;

    printf("Masukkan 1 untuk ya, 0 untuk tidak\n");
    printf("Apakah anda sudah mengonsumsi Karbohidrat hari ini: ");
    scanf("%d", &x);
    if(x == 1){
        nutrisi = nutrisi + 1;
        x = 0;
    }
    printf("Apakah anda sudah mengonsumsi Protein hari ini: ");
    scanf("%d", &x);
    if(x == 1){
        nutrisi = nutrisi + 1;
        x = 0;
    }
    printf("Apakah anda sudah mengonsumsi Lemak hari ini: ");
    scanf("%d", &x);
    if(x == 1){
        nutrisi = nutrisi + 1;
        x = 0;
    }
    printf("Apakah anda sudah mengonsumsi Vitamin hari ini: ");
    scanf("%d", &x);
    if(x == 1){
        nutrisi = nutrisi + 1;
        x = 0;
    }
    printf("Apakah anda sudah mengonsumsi Mineral hari ini: ");
    scanf("%d", &x);
    if(x == 1){
        nutrisi = nutrisi + 1;
        x = 0;
    }
    printf("Apakah anda sudah mengonsumsi Serat hari ini: ");
    scanf("%d", &x);
    if(x == 1){
        nutrisi = nutrisi + 1;
        x = 0;
    }
    printf("Apakah anda sudah mengonsumsi Air hari ini: ");
    scanf("%d", &x);
    if(x == 1){
        nutrisi = nutrisi + 1;
        x = 0;
    }

    if ( nutrisi == 7 ) {
        printf("Selamat, 7 nutrisi sudah anda konsumsi hari ini! Pertahankan agar tidak mudah sakit!");
    } else {
        printf("Yah... Nutrisi yang masuk ke tubuhmu belum lengkap, silahkan lengkapi nutrsimu agar tetap sehat ya!");
    }
    return 0;
}
