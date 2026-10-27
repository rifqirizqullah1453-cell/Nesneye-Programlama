// SOAL 9 — Varsayılan Argümanlar (argumen default)
//
// YANG DIMINTA (dari PDF):
//   - boxVolume(panjang, lebar, tinggi) = panjang x lebar x tinggi.
//   - Ketiga parameter punya nilai default 1, ditulis di PROTOTIPE.
//   - Panggil berurutan: tanpa argumen; hanya 10; (10, 5); (10, 5, 2).
//   - Cetak volume tiap panggilan.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_09.cpp
//
// Jalankan: clang++ -Wall soal09-default-argumen.cpp -o soal09 && ./soal09
// HASIL YANG BENAR: 1, 10, 50, 100.
// Argumen yang dihilangkan diisi default dari KANAN. boxVolume(10) = 10 x 1 x 1.

#include <iostream>
using namespace std;

// LANGKAH 1 — default ditulis DI PROTOTIPE saja, jangan diulang di definisi.
int boxVolume(int length = 1, int width = 1, int height = 1);

int main() {
    // LANGKAH 2 — empat panggilan.
    cout << "Tanpa argumen: " << boxVolume() << '\n';
    // TODO: panggil boxVolume(10)
    // TODO: panggil boxVolume(10, 5)
    // TODO: panggil boxVolume(10, 5, 2)
}

// LANGKAH 3 — definisi (tanpa nilai default di sini).
int boxVolume(int length, int width, int height) {
    return 0;   // TODO: ganti dengan length * width * height
}
