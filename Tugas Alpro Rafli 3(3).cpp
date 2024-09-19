#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float sisi, panjang, lebar, alas, tinggi, luas;


    cout << "Pilih bentuk bangun datar untuk dihitung luasnya:\n";
    cout << "1. Persegi\n";
    cout << "2. Persegi Panjang\n";
    cout << "3. Segitiga\n";
    cout << "Masukkan pilihan Anda (1/2/3): ";
    cin >> pilihan;


    switch (pilihan) {
        case 1:
            cout << "Masukkan panjang sisi persegi: ";
            cin >> sisi;
            luas = sisi * sisi;
            cout << "Luas persegi adalah: " << luas << endl;
            break;

        case 2:
            cout << "Masukkan panjang: ";
            cin >> panjang;
            cout << "Masukkan lebar: ";
            cin >> lebar;
            luas = panjang * lebar;
            cout << "Luas persegi panjang adalah: " << luas << endl;
            break;

        case 3:
            cout << "Masukkan alas segitiga: ";
            cin >> alas;
            cout << "Masukkan tinggi segitiga: ";
            cin >> tinggi;
            luas = 0.5 * alas * tinggi;
            cout << "Luas segitiga adalah: " << luas << endl;
            break;

        default:
            cout << "Pilihan tidak valid!" << endl;
            break;
    }

    return 0;
}
