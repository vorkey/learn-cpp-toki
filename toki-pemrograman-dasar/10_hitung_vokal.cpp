#include <iostream>
#include <string>
using namespace std;

// untuk mengambil input dari berkas masukan.txt gunakan perintah
// ./10_hitung_vokal < masukan.txt

// untuk mencetak output kedalam file keluaran.txt gunakan perintah
// ./10_hitung_vokal < masukan.txt > keluaran.txt
int main() {
  string s;
  cin >> s;

  int banyaknya_vokal = 0;
  for (char c : s) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      banyaknya_vokal++;
    }
  }

  cout << banyaknya_vokal << endl;
}