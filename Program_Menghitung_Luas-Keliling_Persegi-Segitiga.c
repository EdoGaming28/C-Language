#include <stdio.h>

int main(){

    int x, y, a, b, c, alas, tinggi, sisi, luas, keliling;

    printf("== Menghitung luas/keliling segitiga dan persegi. ==\n");
    printf("Masukkan kriteria di bawah ini\n");
    printf("1 untuk Segitiga\n");
    printf("2 untuk persegi\n");
    printf("(1/2): ");
    scanf("%d", &x);

    printf("Masukkan kriteria di bawah ini\n");
    printf("1 untuk Menghitung Luas\n");
    printf("2 untuk Menghitung keliling\n");
    printf("(1/2): ");
    scanf("%d", &y);

    if ( x == 1) {
        if ( y == 1 ){
            printf("alas: ");
            scanf("%d", &alas);
            printf("tinggi: ");
            scanf("%d", &tinggi);
            luas = alas * tinggi / 2;
            printf("luas segitia = %d", luas);
        } else if ( y == 2 ) {
            printf("Panjang sisi a: ");
            scanf("%d", &a);
            printf("Panjang sisi b: ");
            scanf("%d", &b);
            printf("Panjang sisi c: ");
            scanf("%d", &c);
            keliling = a + b + c;
            printf("keliling segitia = %d", keliling);
        }
    } else if ( x == 2 ) {
        printf("sisi: ");
        scanf("%d", &sisi);
        if ( y == 1 ){
            luas = sisi * sisi;
            printf("luas persegi = %d", luas);
        } else if ( y == 2 ) {
            keliling = sisi * 4;
            printf("keliling persegi = %d", keliling);
        }
    }
    return 0;
}
