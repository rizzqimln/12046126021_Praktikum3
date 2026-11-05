/*
 * Program  : Sistem Seleksi Beasiswa SI
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Deskripsi: Menggunakan if-else if dengan operator logika AND
 */

#include <stdio.h>

int main () {
    //1. Pendeklarasian Variabel
    char nama_mahasiswa[50];
    float IPK;
    long pendapatan;

    //2. Proses Input Pendataan Beasiswa Mahasiswa
    printf("====== PENDATAAN BEASISWA MAHASISWA ======\n");
    printf("Masukkan nama anda              : ");
    fgets(nama_mahasiswa, 50, stdin);
    printf("Masukkan IPK anda               : ");
    scanf("%f", &IPK);
    printf("Masukkan pendapatan orang tua   : ");
    scanf("%ld", &pendapatan);

    //3. Proses Output Hasil Seleksi Beasiswa
    printf("==========================================\n");
    printf("            HASIL SELEKSI BEASISWA          \n");
    printf("==========================================\n");
    printf("Nama    :%s", nama_mahasiswa);

    //4. Proses penentuan dan perhitungan status beasiswa dengan menggunakan nested-if
    if (IPK >= 3.50 && pendapatan < 3000000 ) {
        printf("Status Beasiswa Penuh (A) \n");
    } else if (IPK >= 3.00 && pendapatan <5000000 ) {
        printf("Status : Beasiswa 50% (B) \n");
    } else if (IPK >= 2.75 && pendapatan <7000000) {
        printf("Status : Beasiswa 25% (C) \n");
    } else {
        printf("Status: Tidak Mendapat Beasiswa\n");
    }
    printf("==========================================\n");

    return 0;
}
