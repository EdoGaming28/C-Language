#include <stdio.h>

int main(){

    int kendaraan, ringan, sedang, berat;
    int denda;

    printf("Masukkan kendaraan yang anda gunakan ketika melakukan pelanggaran\n");
    printf("1 untuk motor\n");
    printf("2 untuk mobil\n");
    printf("3 untuk truck\n");
    printf("Kendaraan anda: ");
    scanf("%d", &kendaraan);

    printf("\nMasukkan berapa kali anda melakukan pelanggaran\n");
    if ( kendaraan == 1 ) {
        printf("(1) Tidak memakai helm, tidak membawa STNK dan SIM: ");
        scanf("%d", &ringan);
        printf("(2) Melanggar lampu APILL: ");
        scanf("%d", &sedang);
        printf("(3) Menabrak kendaraan lain: ");
        scanf("%d", &berat);
    } else if ( kendaraan == 2 ) {
        printf("(1) tidak membawa STNK dan SIM: ");
        scanf("%d", &ringan);
        printf("(2) Melanggar lampu APILL: ");
        scanf("%d", &sedang);
        printf("(3) Menabrak kendaraan lain, membawa penumpang lebih dari batas: ");
        scanf("%d", &berat);
    } else if ( kendaraan == 3 ) {
        printf("(1) tidak membawa STNK dan SIM: ");
        scanf("%d", &ringan);
        printf("(2) Melanggar lampu APILL: ");
        scanf("%d", &sedang);
        printf("(3) Menabrak kendaraan lain, membawa penumpang lebih dari batas: ");
        scanf("%d", &berat);
    } else {
        printf("Masukkan input dengan benar!");
    }

    if ( ringan > 0 && ringan <= 3) {
        denda = denda + 100000;
    } else if ( ringan > 3 ) {
        denda = denda + 200000;
    }

    if ( sedang > 0 && sedang <= 3) {
        denda = denda + 250000;
    } else if ( ringan > 3 ) {
        denda = denda + 300000;
    }

    if ( berat > 0 && berat <= 3) {
        denda = denda + 350000;
    } else if ( berat > 3 ) {
        denda = denda + 400000;
    }

    printf("\nAnda melakukan pelanggaran:\n");

    if ( ringan != 0 ) {
        printf("jenis ringan sebanyak %d kali\n", ringan);
    }

    if ( sedang != 0 ) {
        printf("jenis sedang sebanyak %d kali\n", sedang);
    }

    if ( berat != 0 ) {
        printf("jenis berat sebanyak %d kali\n", berat);
    }

    printf("Jadi total denda yang harus anda bayar adalah %d\n", denda);
    return 0;
}
