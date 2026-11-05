/*
 * Program  : Kalkulator Sederhana Dengan Menu
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Deskripsi: Switch-case (int) + if else untuk mengecek pembagi apakah = 0
 */

#include <stdio.h>

int main() {
    //1. Mendeklarasikan variabel
    int num1;
    int num2;
    int menu;
    int hasil;
    float pembagian;

    //2. Memilih menu yang tersedia
        printf("=== KALKULATOR SI ===\n");
        printf("1. Penjumlahan\n");
        printf("2. Pengurangan\n");
        printf("3. Perkalian\n");
        printf("4. Pembagian\n");
        printf("Pilih operasi (1-4): ");
        scanf("%d", &menu);

    //3. Memasukkan angka yang dibutuhkan
        printf("Masukkan dua angka: ");
        scanf("%d%d", &num1, &num2);

    //4. Memilih 1 kondisi dengan nilai tetap menggunakan switch-case
        switch (menu) {
            case 1:
                //5. Melakukan penjumlahan pada case 1
                hasil = num1 + num2;
                //6. Output hasil yang terdapat pada case 1
                printf("Hasil Penjumlahan: %d\n", hasil);
                break;
            case 2:
                //7. Melakukan pengurangan pada case 2
                hasil = num1 - num2;
                printf("Hasil Pengurangan: %d\n", hasil);
                break;
            case 3:
                //8. Melakukan perkalian pada case 3
                hasil = num1 * num2;
                printf("Hasil Perkalian: %d\n", hasil);
                break;
            case 4:
                //9. Pengecekan kondisi pembagian
                if (num2 != 0){
                //10. Melakukan pembagian pada case 4
                    hasil = num1 / num2;
                    printf("Hasil Pembagian: %d\n", hasil);
                } else {
                //11. Output jika pembagian dilakukan dengan angka '0'
                    printf("Tidak bisa membagi angka dengan '0'.\n");
                }
                break;

            default:
                printf("ERROR: Menu tidak tersedia.");
        }
        return 0;
}
