#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(){

    int cabang, gaji_pokok, bonus, persen;
    char jabatan[10];
    bool cek = false;

    printf("\n==== PROGRAM FNB BONUS AKHIR BULAN ====\n\n");

    // CABANG
    do{
        printf("Masukkan Lokasi Cabang (1, 2, 3, 4): ");
        scanf("%d", &cabang);
    }
    while(cabang != 1 && cabang != 2 && cabang != 3 && cabang != 4);


    // JABATAN
    printf("Masukkan jabatan sesuai kriteria\n");
    printf("-> Manager (M)\n");
    printf("-> Asisten Manager (AM)\n");
    printf("-> Supervisor (SPV)\n");
    printf("-> Staff (STAFF)\n");

    printf("Jabatan (M/AM/SPV/STAFF): ");
    scanf("%s", &jabatan);
    do{
        if((strcmp(jabatan, "M") == 0) || (strcmp(jabatan, "AM") == 0) || (strcmp(jabatan, "SPV") == 0) || (strcmp(jabatan, "STAFF") == 0)){
            cek = true;
        } else {
            printf("Jabatan (1/2/3/4): ");
            scanf("%s", &jabatan);
        }
    }
    while(cek == false);

    // GAJI POKOK
    do{
        // keterangan akan berbeda masing masing posisi jabatan
        printf("\nKeterangan:\n");
        if((strcmp(jabatan, "M") == 0)){ //Manager
            printf("Gaji Pokok untuk M > 5000000\n");
        } else if((strcmp(jabatan, "AM") == 0)){ //Asisten Manager
            printf("Gaji Pokok untuk AM > 5000000\n");
        } else if((strcmp(jabatan, "SPV") == 0)){ //Supervisor
            printf("Gaji Pokok untuk SPV > 3500000\n");
        } else if((strcmp(jabatan, "STAFF") == 0)){ //Staff
            printf("Gaji Pokok untuk STAFF > 2000000\n");
        }
        printf("Gaji Pokok: ");
        scanf("%d", &gaji_pokok);
    }
    while((strcmp(jabatan, "M") == 0) && gaji_pokok < 5000000 || (strcmp(jabatan, "AM") == 0) && gaji_pokok < 5000000 || (strcmp(jabatan, "SPV") == 0) && gaji_pokok < 3500000  || (strcmp(jabatan, "STAFF") == 0) && gaji_pokok < 2000000);


    // Mengelompokkan pilihan berdasarkan cabang kemudian di jabatan di cek ulang dan di hitung bonusnya.
    // fungsi persen agar dapat memberikan keterangan di akhir berapa persen karyawan mendapatkan bonus.
    switch (cabang) {
        case 1:
            if ( (strcmp(jabatan, "M") == 0) ) {
                bonus = gaji_pokok * 0.55;
                persen = 55;
            } else if ((strcmp(jabatan, "AM") == 0)) {
                bonus = gaji_pokok * 0.55;
                persen = 55;
            } else if ((strcmp(jabatan, "SPV") == 0)) {
                bonus = gaji_pokok * 40 / 100;
                persen = 40;
            } else if ((strcmp(jabatan, "STAFF") == 0)) {
                bonus = gaji_pokok * 25 / 100;
                persen = 25;
            }
            break;
        case 2:
            if ((strcmp(jabatan, "M") == 0)) {
                bonus = gaji_pokok * 54 / 100;
                persen = 54;
            } else if ((strcmp(jabatan, "AM") == 0)) {
                bonus = gaji_pokok * 54 / 100;
                persen = 54;
            } else if ((strcmp(jabatan, "SPV") == 0)) {
                bonus = gaji_pokok * 39 / 100;
                persen = 39;
            } else if ((strcmp(jabatan, "STAFF") == 0)) {
                bonus = gaji_pokok * 24 / 100;
                persen = 24;
            }
            break;
        case 3:
            if ((strcmp(jabatan, "M") == 0)) {
                bonus = gaji_pokok * 53 / 100;
                persen = 53;
            } else if ((strcmp(jabatan, "AM") == 0)) {
                bonus = gaji_pokok * 53 / 100;
                persen = 53;
            } else if ((strcmp(jabatan, "SPV") == 0)) {
                bonus = gaji_pokok * 38 / 100;
                persen = 38;
            } else if ((strcmp(jabatan, "STAFF") == 0)) {
                bonus = gaji_pokok * 23 / 100;
                persen = 23;
            }
            break;
        case 4:
            if ((strcmp(jabatan, "M") == 0)) {
                bonus = gaji_pokok * 52 / 100;
                persen = 52;
            } else if ((strcmp(jabatan, "AM") == 0)) {
                bonus = gaji_pokok * 52 / 100;
                persen = 52;
            } else if ((strcmp(jabatan, "SPV") == 0)) {
                bonus = gaji_pokok * 37 / 100;
                persen = 37;
            } else if ((strcmp(jabatan, "STAFF") == 0)) {
                bonus = gaji_pokok * 22 / 100;
                persen = 22;
            }
            break;
    }

    printf("\nAnda bekerja sebagai %s di lokasi cabang %d dan bonus akhir bulan anda %d persen dari gaji pokok %d\n", jabatan, cabang, persen, gaji_pokok);
    printf("Jadi Total bonus akhir bulan anda adalah %d\n\n", bonus);

    return 0;
}
