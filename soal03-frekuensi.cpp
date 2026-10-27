// SOAL 3 — Zar Sonuçlarının Sıklığı (frekuensi hasil dadu)
//
// YANG DIMINTA (dari PDF):
//   - Simulasi 60.000.000 lemparan dadu 6 sisi.
//   - Hitung tiap sisi di variabel integer TERPISAH (6 variabel).
//   - Pakai switch untuk menaikkan penghitung yang sesuai.
//   - Cetak tabel rapi: sisi 1..6 dan jumlah kemunculannya.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_03.cpp
//
// Jalankan: clang++ -O2 -Wall soal03-frekuensi.cpp -o soal03 && ./soal03
// Cek: tiap sisi sekitar 10.000.000 dan JUMLAH keenamnya tepat 60.000.000.
// (-O2 membuat 60 juta putaran cepat; tanpa itu bisa agak lama.)

#include <iostream>
#include <iomanip>   // setw: lebar kolom
#include <random>
using namespace std;

int main() {
    default_random_engine engine;
    uniform_int_distribution<int> randomInt{1, 6};

    // LANGKAH 1 — enam penghitung (counter / sayaç), mulai dari 0.
    int frequency1{0}, frequency2{0}, frequency3{0};
    int frequency4{0}, frequency5{0}, frequency6{0};

    // LANGKAH 2 — ulangi 60000000 kali.
    for (int roll{1}; roll <= 60000000; ++roll) {
        // LANGKAH 3 — lempar dadu, simpan di `face`.
        int face{randomInt(engine)};

        // LANGKAH 4 — switch(face): case 1: ++frequency1; break; ... sampai case 6.
        // JEBAKAN: lupa `break;` membuat case berikutnya ikut jalan.
        switch (face) {
            // TODO: enam case
            default: break;
        }
    }

    // LANGKAH 5 — cetak tabel. setw(n) memberi lebar kolom n.
    cout << "Sisi" << setw(13) << "Frekuensi" << '\n';
    cout << setw(4) << 1 << setw(13) << frequency1 << '\n';
    // TODO: baris untuk sisi 2 sampai 6 (cara sama)
}
