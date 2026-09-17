#include <iostream>
using namespace std;

int main() {
    int pilihan;
    int uangMasuk, harga = 0;

    cout << "=== VENDING MACHINE AUTOMAT ===" << endl;
    cout << "Pilihan Minuman:" << endl;
    cout << "1. Air Mineral (Rp 4000)" << endl;
    cout << "2. Teh Botol (Rp 6000)" << endl;
    cout << "3. Kopi Susu (Rp 10000)" << endl;
    cout << "Pilih kode minuman (1-3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1: harga = 4000; break;
        case 2: harga = 6000; break;
        case 3: harga = 10000; break;
        default:
            cout << "\nError: Kode minuman tidak valid!" << endl;
            return 0;
    }

    cout << "Masukkan uang Anda (Rp): ";
    cin >> uangMasuk;

    cout << "\n--- DETAIL TRANSAKSI ---" << endl;

    if (uangMasuk < harga) {
        cout << "Transaksi Gagal! Uang Anda kurang Rp " << (harga - uangMasuk) << "." << endl;
    } else {
        int kembalian = uangMasuk - harga;
        cout << "Transaksi Berhasil! Kembalian Anda: Rp " << kembalian << endl;

        int lembar5k = kembalian / 5000;
        kembalian %= 5000;

        int lembar1k = kembalian / 1000;

        cout << "Rincian Kembalian:" << endl;
        cout << "- " << lembar5k << " Lembar Rp 5.000" << endl;
        cout << "- " << lembar1k << " Lembar Rp 1.000" << endl;
    }

    return 0;
}