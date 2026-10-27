// SOAL 7 — Küpün Hacmi (volume kubus)
//
// YANG DIMINTA (dari PDF):
//   - Baca panjang sisi kubus bertipe double.
//   - inline double cube(double side) mengembalikan volume.
//   - Fungsi DIDEFINISIKAN sebelum main (tidak perlu prototipe terpisah).
//   - Cetak sisi yang dimasukkan dan volume hasilnya.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_07.cpp
//
// Jalankan: clang++ -Wall soal07-kubus.cpp -o soal07 && ./soal07
// Cek: sisi 3.5 -> volume 42.875. Sisi 2 -> 8.

#include <iostream>
using namespace std;

// LANGKAH 1 — `inline` = saran ke compiler: tempel isi fungsi langsung di
// tempat pemanggilan (hemat biaya panggilan untuk fungsi kecil).
// Volume kubus = sisi x sisi x sisi.
inline double cube(double side) {
    return 0.0;   // TODO: ganti dengan side * side * side
}

int main() {
    double sideValue{0.0};

    // LANGKAH 2 — minta input dan baca.
    cout << "Masukkan panjang sisi: ";
    // TODO: cin >> sideValue;

    // LANGKAH 3 — cetak sisi dan volume.
    // TODO: cout << "Sisi: " << sideValue << ", volume: " << cube(sideValue) << '\n';
}
