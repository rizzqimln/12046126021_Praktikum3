/*
 *Program  : Sistem Klasifikasi BMI
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Deskripsi: Penggunaan if dan nested if untuk BMI
 */
#include <stdio.h>

int main() {
    //1. Mendeklarasikan variabel
    float berat;
    float tinggi;
    float BMI;

    //2. Melakukan input berat badan dan tinggi badan
    printf("====== SISTEM KLASIFIKASI BMI =====\n");
    printf("Masukkan berat badan (kg): ");
    scanf("%f", &berat);
    printf("Masukkan tinggi badan (meter): ");
    scanf("%f", &tinggi);

    //3. Melakukan perhitungan BMI
    printf("\n===========  HASIL BMI  ===========\n");
    BMI = berat / (tinggi * tinggi);

    //4. Melakukan pengecekan kondisi BMI
    if (BMI < 18.5) {
        //5. Output jika Berat badan kurang
        printf("Berat badan kurang");
    } else if (BMI > 18.5 && BMI < 24.9) {
        //6. Output jika Berat badan normal
        printf("Berat badan normal");
    } else if (BMI > 25 && BMI < 29.9) {
        //7. Output jika Berat badan berlebih
        printf("Berat badan berlebih");
        //8. Output jika Obesitas
    } else if (BMI >= 30) {
        printf("Obesitas");
    }
    printf("\n===================================\n");
    return 0;
}
