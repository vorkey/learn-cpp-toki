#include <iostream>
using namespace std;

// min, max, abs, void
// string.size(), string.empty(), string.back(),
// s.substr(i_awal,jumlah_karakter)

int jantan[4] = {0, 10, 50, 60};
int betina[4] = {7, 80, 9, 40};

int biaya(int jumlah_bebek) {
  int harga_bebek;

  if (jumlah_bebek < 10) {
    harga_bebek = 100000;
  } else if (jumlah_bebek <= 50) {
    harga_bebek = 75000;
  } else {
    harga_bebek = 50000;
  }

  return harga_bebek * jumlah_bebek;
}

// pass by value
int kali_dua_dari_value_tidak_ubah_variable(int a) {
  return a *= 2;
  // a tetap sama valuenya
  // fungsi bisa menggunakan parameter literal value contoh: yay(10), dan
  // parameter variabel contoh: yay(wa)
}

// pass by reference
int kali_dua_dari_reference_ubah_variable(int &a) {
  return a *= 2;
  // value a berubah dikalikan 2
  // fungsi hanya bisa menggunakan parameter variabel contoh yay(weh)
}

void tukar(int &a, int &b) {
  int temp = a;
  a = b;
  b = a;
}

int biaya_total(int hari) { return biaya(jantan[hari]) + biaya(betina[hari]); }

int main() {

  for (int i = 0; i < 4; i++) {
    cout << biaya_total(i) << endl;
  }
}