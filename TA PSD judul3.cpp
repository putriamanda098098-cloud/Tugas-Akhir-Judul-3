#include <iostream>
#include <string>
using namespace std;

int main() {
    const int n = 5;
    string nama[n] = {"Manda", "Nanda", "Deta", "Preisi", "Nabila"};
    string cari;
    int posisi = -1;

    cout << "Daftar Kontak: " << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << nama[i] << endl;
    }

    cout << "\nMasukkan nama yang ingin dicari: ";
    cin >> cari;

           
    for (int i = 0; i < n; i++) {
        if (nama[i] == cari) {
            posisi = i;
            break;
        }
    }

    
    if (posisi != -1) {
        cout << "Kontak \"" << cari << "\" ditemukan pada posisi ke-" << posisi + 1 << "." << endl;
    } else {
        cout << "Kontak \"" << cari << "\" tidak ditemukan dalam daftar." << endl;
    }

    return 0;
}
