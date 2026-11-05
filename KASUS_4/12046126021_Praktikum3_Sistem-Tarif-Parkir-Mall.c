/*
 *Program   : Sistem Tarif Parkir Mall
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Deskripsi: Switch-case (char) + nested if untuk denda
 */

#include <stdio.h>

int main() {
    //1. Pendeklarasian Variabel
    char jenis;
    int lama;
    int tarif;

    //2. Input pemilihan jenis kendaraan
    printf("====== SISTEM PARKIR MALL SI ======\n");
    printf("Jenis Kendaraan (M=Motor, A=Mobil): ");
    scanf(" %c", &jenis); //Menggunakan spasi sebelum %c untuk menghindari enter

    //3. Input lama parkir
    printf("Lama parkir (jam)                 : ");
    scanf("%d", &lama);

    //4. Switch-case (char) atau karakter pemilihan jenis kendaraan
    switch (jenis) {
        case 'M':
        case 'm':
            //5. Proses perhitungan tarif pada case pertama
            tarif = lama * 2000;
            //6. Proses perhitungan denda dengan nested if pada case pertama
            if (lama > 5) {
                tarif = tarif + 10000;
                printf("Anda terkena denda Rp 10.000 (parkir > 5 jam)\n");
            }
            //7. Output case pertama
            printf("Total Tarif Motor: Rp %d\n", tarif);
            break;

        case 'A':
        case 'a':
            //8. Proses perhitungan tarif pada case kedua
            tarif = lama * 4000;
            //9. Proses perhitungan denda dengan nested if pada case kedua
            if (lama > 5) {
                tarif = tarif + 15000;
                printf("Anda terkena denda Rp 15.000 (parkir > 5 jam)\n");
            }
            //10. Output case kedua
            printf("Total Tarif Mobil: Rp %d\n", tarif);
            break;

        //11. Output jika jenis kendaraan yang dimasukkan tidak valid
        default:
            printf("ERROR: Jenis kendaraan tidak valid! \n");
            printf("Gunakan huruf M atau A saja. \n");
    }

    return 0;

}
