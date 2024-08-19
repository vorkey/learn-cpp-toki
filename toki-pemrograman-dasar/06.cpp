#include <iostream>

using namespace std;

int main() {
  int luas[5];

  luas[0] = 225 * 335;
  luas[1] = 215 * 394;
  luas[2] = 198 * 400;
  luas[3] = 314 * 298;
  luas[4] = 299 * 278;

  int hasil = 0;

  for (int i = 0; i < 5; i++) {
    if (luas[i] > 80000) {
      hasil++;
    }
  }

  cout << hasil << endl;

  int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
  int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};

  int jumlah = 0;

  for (int i = 0; i < 10; i++) {
    jumlah += beli[i] - jual[i];
    cout << jumlah << endl;
  }

  bool lampu[101];
  int jumlah_menyala = 0;

  // Pada mulanya, seluruh lampu dalam kondisi mati.
  for (int i = 1; i <= 100; i++) {
    lampu[i] = false;
  }

  // Untuk setiap jam (pukul p),
  for (int p = 1; p <= 10; p++) {
    // untuk setiap lampu nomor i,
    for (int i = 1; i <= 100; i++) {
      // jika i merupakan kelipatan p,
      if (i % p == 0) {
        // tekan saklarnya.
        lampu[i] = !lampu[i];
      }
    }
  }

  // Hitung banyaknya lampu yang menyala,
  for (int i = 1; i <= 100; i++) {
    if (lampu[i]) {
      jumlah_menyala++;
    }
  }

  // lalu cetak.
  cout << jumlah_menyala << endl;
}