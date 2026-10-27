// SOAL 1 — Üç Sayının En Büyüğü (bilangan terbesar dari tiga)
//
// YANG DIMINTA (dari PDF):
//   - Baca 3 bilangan bulat (tamsayı) dari pengguna.
//   - Fungsi maximum(3 parameter) mengembalikan yang terbesar.
//   - Prototipe SEBELUM main, definisi SESUDAH main.
//   - Cetak hasilnya. Harus benar juga kalau ketiganya NEGATIF.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_01.cpp
//
// CARA KERJA: isi bagian yang bertanda TODO, dari atas ke bawah.
// Jalankan: clang++ -Wall soal01-maximum.cpp -o soal01 && ./soal01
//   (atau pakai compiler/IDE kelas bila sudah diketahui)
// Uji dengan: 3 5 4   lalu   -3 -7 -5   (harus keluar 5 lalu -3)

#include <iostream>
using namespace std;

// LANGKAH 1 — prototipe (function prototype / fonksiyon prototipi).
// Ini "perkenalan" fungsi ke compiler supaya main boleh memanggilnya
// walau definisinya ada di bawah. Tulis: tipe-balik nama(tipe-param, ...);
int maximum(int x, int y, int z);

int main() {
    int a{0}, b{0}, c{0};

    // LANGKAH 2 — minta tiga bilangan, baca dengan cin.
    // TODO: cout << "Masukkan tiga bilangan: "; lalu cin >> a >> b >> c;

    // LANGKAH 3 — panggil maximum dan cetak hasilnya.
    // TODO: cout << "Terbesar: " << maximum(a, b, c) << '\n';
}

// LANGKAH 4 — definisi fungsi (function definition / fonksiyon tanımı).
// JEBAKAN: jangan mulai dengan `largest = 0`. Kalau semua bilangan negatif,
// 0 akan menang padahal bukan salah satu input. Mulai dari `x`.
// ALUR: largest = x; kalau y > largest -> largest = y; kalau z > largest -> largest = z.
int maximum(int x, int y, int z) {
    int largest{x};
    // TODO: dua if untuk membandingkan y dan z dengan largest
    return largest;
}
