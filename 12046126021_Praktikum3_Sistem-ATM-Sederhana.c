/*
 * Program  : Sistem ATM Sederhana
 * Nama     : Rizzqi Maulana Ilhami
 * NIM      : 12046126021
 * Deskripsi: if-else + switch-case + nested if
 */

#include <stdio.h>

int main() {
    //1. Pendeklarasian Variabel
    const int PIN_BENAR = 1234;
    int saldo = 500000;
    int pin_input;
    int menu;
    int tarik;

    //2. Input PIN
    printf("=== MESIN ATM BANK SI === \n");
    printf("Masukkan PIN (4 digit): ");
    scanf("%d", &pin_input);

    //3. Memilih 1 kondisi jika pin benar dengan if
    if (pin_input == PIN_BENAR) {
        printf("\nPIN Benar. Login Berhasil!\n\n");
        printf("=== MENU UTAMA ===\n");
        printf("1. Cek Saldo\n");
        printf("2. Tarik Tunai\n");
        printf("Pilih menu (1/2): ");
        scanf("%d", &menu);

    //4. Memilih 1 kondisi dengan nilai tetap menggunakan switch-case
        switch (menu) {
            case 1:
                printf("Saldo Anda saat ini: Rp %d\n", saldo);
                break;
            case 2:
                printf("Masukkan nominal tarik: Rp ");
                scanf("%d", &tarik);
                if (tarik <= saldo) {
                    if (tarik % 5000 == 0) {
                        saldo = saldo - tarik;
                        printf("Penarikan berhasil!\n");
                        printf("Sisa saldo; Rp %d\n", saldo);
                    } else {
                        printf("\nERROR: Nominal harus kelipatan Rp 50.000\n");
                    }
                } else {
                    printf("ERROR: Saldo tidak cukup!\n");
                }
                break;
            default:
                printf("ERROR: Menu tidak tersedia.");
        }
    } else {
        printf("\nPIN SALAH! Akses ditolak.\n");
    }

    //5. Output hasil ATM
    printf("\nTerima kasih telah menggunakan ATM Bank SI.\n");
    return 0;
}
