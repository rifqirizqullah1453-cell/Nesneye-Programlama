// SOAL 4 — Kullanıcının Belirlediği Tohum (seed dari pengguna)
//
// YANG DIMINTA (dari PDF):
//   - Baca bilangan NON-NEGATIF dari pengguna sebagai seed (tohum).
//   - Inisialisasi default_random_engine dengan seed itu.
//   - Lempar dadu 6 sisi 10 kali dengan uniform_int_distribution, cetak.
//   - Seed sama di lingkungan sama -> urutan hasil sama.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_04.cpp
//
// Jalankan: clang++ -Wall soal04-seed.cpp -o soal04 && ./soal04
// Cek: jalankan dua kali dengan seed 5 -> hasil identik.
//      Seed 6 -> urutan berbeda.

#include <iostream>
#include <random>
using namespace std;

int main() {
    // LANGKAH 1 — pakai `unsigned int` karena seed tidak boleh negatif.
    unsigned int seed{0};
    cout << "Masukkan seed: ";
    // TODO: cin >> seed;

    // LANGKAH 2 — engine langsung diberi seed lewat kurung kurawal.
    default_random_engine engine{seed};
    uniform_int_distribution<int> randomInt{1, 6};

    // LANGKAH 3 — 10 lemparan, sama seperti Soal 2.
    // TODO: for (...) { cout << randomInt(engine) << ' '; }

    cout << '\n';
}
