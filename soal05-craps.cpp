// SOAL 5 — Craps Oyunu (permainan Craps, dua dadu)
//
// YANG DIMINTA (dari PDF):
//   - rollDice(): lempar 2 dadu, cetak nilai tiap dadu dan jumlahnya,
//     lalu RETURN jumlahnya.
//   - Engine di-seed dengan random_device. Engine dan distribution harus
//     MENYIMPAN keadaannya antar-pemanggilan (jangan dibuat ulang tiap panggilan).
//   - Status permainan pakai enum class.
//   - Lemparan pertama: jumlah 7 atau 11 -> MENANG. 2, 3, atau 12 -> KALAH.
//     Jumlah lain -> jadi "angka target" (point), lanjut melempar.
//   - Setelah ada target: lempar sampai target muncul lagi -> MENANG,
//     atau 7 muncul -> KALAH. Selain itu lempar terus.
//   - Akhir: cetak pesan menang atau kalah.
//
// CONTOH BUKU (baca dulu): CPlusPlusHowToProgram11e/ch05/fig05_05.cpp
//
// Jalankan: clang++ -Wall soal05-craps.cpp -o soal05 && ./soal05
// Cek: jalankan beberapa kali; hasil berbeda tiap kali (random_device),
//      dan alur menang/kalah sesuai aturan di atas.

#include <iostream>
#include <random>
using namespace std;

int rollDice();   // prototipe

// LANGKAH 1 — enum class = tipe pilihan bernama. Tiga kemungkinan status.
enum class Status { CONTINUE, WON, LOST };

int main() {
    // LANGKAH 2 — lemparan pertama.
    int myPoint{0};
    Status gameStatus{Status::CONTINUE};
    int sumOfDice{rollDice()};

    // LANGKAH 3 — switch pada jumlah pertama:
    //   case 7: case 11: gameStatus = Status::WON; break;
    //   case 2: case 3: case 12: gameStatus = Status::LOST; break;
    //   default: myPoint = sumOfDice; cetak "Point is " << myPoint; break;
    switch (sumOfDice) {
        // TODO
        default: break;
    }

    // LANGKAH 4 — selama status masih CONTINUE, lempar lagi:
    //   sumOfDice = rollDice();
    //   jika sumOfDice == myPoint -> WON
    //   jika sumOfDice == 7       -> LOST
    while (gameStatus == Status::CONTINUE) {
        // TODO
        break;   // hapus baris ini setelah TODO selesai (supaya tidak loop tanpa akhir)
    }

    // LANGKAH 5 — cetak "Player wins" kalau WON, selain itu "Player loses".
    // TODO
}

int rollDice() {
    // LANGKAH 6 — `static` = dibuat SEKALI, nilainya bertahan di panggilan berikutnya.
    // Inilah yang membuat engine "menyimpan keadaan".
    static default_random_engine engine{random_device{}()};
    static uniform_int_distribution<int> randomInt{1, 6};

    int die1{randomInt(engine)};
    int die2{randomInt(engine)};
    int sum{die1 + die2};

    // TODO: cetak "Player rolled die1 + die2 = sum" (nilai tiap dadu dan jumlahnya)

    return sum;
}
