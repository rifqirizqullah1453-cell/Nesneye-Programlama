// SOAL 2 — On Zar Atışı (lempar dadu 10 kali)
//
// YANG DIMINTA (dari PDF):
//   - Dadu 6 sisi dilempar 10 kali, hasil dicetak.
//   - Pakai default_random_engine dan uniform_int_distribution (1–6).
//   - JANGAN beri seed eksplisit ke engine.
//   - Pakai perulangan for.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_02.cpp
//
// Jalankan: clang++ -Wall soal02-on-zar.cpp -o soal02 && ./soal02
// Cek: ada 10 angka, semuanya 1..6. Tanpa seed, urutan sama tiap kali dijalankan
// (di lingkungan yang sama) — itu wajar, jangan "diperbaiki".

#include <iostream>
#include <random>   // default_random_engine, uniform_int_distribution
using namespace std;

int main() {
    // LANGKAH 1 — engine = mesin pembangkit bilangan acak (üreteç).
    default_random_engine engine;

    // LANGKAH 2 — distribution = membentuk hasil engine jadi rentang 1..6.
    uniform_int_distribution<int> randomInt{1, 6};

    // LANGKAH 3 — for 10 kali; tiap putaran cetak randomInt(engine).
    // randomInt(engine) = "lempar dadu satu kali".
    // TODO: for (int i{1}; i <= 10; ++i) { cout << ... << ' '; }

    cout << '\n';
}
