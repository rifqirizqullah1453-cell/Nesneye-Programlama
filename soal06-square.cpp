// SOAL 6 — Fonksiyon Çağrısı ve Yerel Değişkenler (pemanggilan fungsi, variabel lokal)
//
// YANG DIMINTA (dari PDF):
//   - Fungsi square(int) mengembalikan kuadrat bilangan.
//   - Prototipe SEBELUM main, definisi SESUDAH main.
//   - Di main: variabel lokal a = 10; result = square(a).
//   - TIDAK perlu mencetak apa pun.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_06.cpp
//
// Jalankan: clang++ -Wall soal06-square.cpp -o soal06 && ./soal06
// Cek: program selesai tanpa error dan tanpa keluaran (itu memang benar).
// Ingin bukti isinya 100? Tambah sementara: cout << result; lalu hapus lagi.

int square(int number);   // LANGKAH 1: prototipe (sudah ditulis)

int main() {
    // LANGKAH 2 — variabel lokal (hanya hidup di dalam main).
    // TODO: int a{10};
    // TODO: int result{square(a)};
    //   result menyimpan nilai balik square(a).
}

// LANGKAH 3 — definisi. Kuadrat = bilangan dikali dirinya sendiri.
int square(int number) {
    return 0;   // TODO: ganti dengan number * number
}
