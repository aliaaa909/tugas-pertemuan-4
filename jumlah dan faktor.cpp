#include <iostream>
using namespace std;

bool cekPrima(int n) {
    if (n <= 1) return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void faktorBilangan(int n) {
    cout << "Faktor dari " << n << ": ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int batas;
    cout << "Masukkan batas rentang bilangan (mulai dari 1): ";
    cin >> batas;

    // Menyimpan jumlah bilangan genap, ganjil, dan prima
    int jumlahGenap = 0, jumlahGanjil = 0, jumlahPrima = 0;

    cout << "Bilangan genap: ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
            jumlahGenap += i;
        }
    }
    cout << endl;

    cout << "Bilangan ganjil: ";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " ";
            jumlahGanjil += i;
        }
    }
    cout << endl;

    cout << "Bilangan prima: ";
    for (int i = 1; i <= batas; i++) {
        if (cekPrima(i)) {
            cout << i << " ";
            jumlahPrima += i;
        }
    }
    cout << endl;
    cout << endl;

    // Menampilkan hasil penjumlahan
    cout << "Jumlah bilangan genap: " << jumlahGenap << endl;
    cout << "Jumlah bilangan ganjil: " << jumlahGanjil << endl;
    cout << "Jumlah bilangan prima: " << jumlahPrima << endl;
    cout << endl;

    // Menampilkan faktor dari jumlah bilangan genap, ganjil, dan prima
    faktorBilangan(jumlahGenap);
    faktorBilangan(jumlahGanjil);
    faktorBilangan(jumlahPrima);

    cout << "Program selesai." << endl;

    return 0;
}
