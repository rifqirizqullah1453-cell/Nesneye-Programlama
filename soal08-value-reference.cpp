// SOAL 8 — Değer ve Referansla Aktarım (pass by value vs pass by reference)
//
// YANG DIMINTA (dari PDF):
//   - x = 2, z = 4 di awal.
//   - squareByValue(int number): kuadratkan parameternya, RETURN nilai baru.
//   - squareByReference(int& numberRef): ubah variabel asli jadi kuadratnya,
//     TIDAK mengembalikan nilai.
//   - Tampilkan x dan z SEBELUM dan SESUDAH tiap pemanggilan.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_08.cpp
//
// Jalankan: clang++ -Wall soal08-value-reference.cpp -o soal08 && ./soal08
// HASIL YANG BENAR:
//   x sebelum 2, hasil squareByValue 4, x sesudah TETAP 2   (yang diubah salinan)
//   z sebelum 4, z sesudah BERUBAH jadi 16                  (yang diubah variabel asli)
// Inilah inti soalnya: `int` = disalin; `int&` = alias ke variabel asli.

#include <iostream>
using namespace std;

int squareByValue(int number);          // menerima SALINAN
void squareByReference(int& numberRef); // menerima ALIAS (void = tanpa nilai balik)

int main() {
    int x{2};
    int z{4};

    // LANGKAH 1 — by value.
    cout << "x sebelum squareByValue: " << x << '\n';
    // TODO: cout << "nilai balik squareByValue: " << squareByValue(x) << '\n';
    // TODO: cetak x sesudah (apakah x berubah?)

    // LANGKAH 2 — by reference.
    cout << "z sebelum squareByReference: " << z << '\n';
    // TODO: squareByReference(z);
    // TODO: cetak z sesudah (apakah z berubah?)
}

// LANGKAH 3 — isi kedua fungsi.
int squareByValue(int number) {
    // TODO: number *= number;  lalu  return number;
    return number;
}

void squareByReference(int& numberRef) {
    // TODO: numberRef *= numberRef;   (tanpa return)
}
