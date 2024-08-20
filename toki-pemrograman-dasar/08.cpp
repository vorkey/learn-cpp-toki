#include <iostream>
// untuk fixed dan setprecision()
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

vector<int> jumlah_bersebelahan(vector<int> v) {
  int size = v.size();
  vector<int> result_vector;
  for (int i = 0; i < size - 1; i++) {
    result_vector.push_back(v[i] + v[i + 1]);
  }

  return result_vector;
}

// cout tidak bisa mencetak sebuah vector, sehingga kita perlu
// membuat fungsi tersendiri untuk mencetak vector secara manual.
void cetak_vector(vector<int> v) {
  cout << "vector:";
  for (int x : v) {
    cout << " " << x;
  }
  cout << endl;
}

// stoi() to convert string to int or long long
// to_string() to convert anything to string
string kalkulator(char op, vector<string> data) {
  long long result = 0;
  if (op == '+') {
    for (string num : data) {
      result += stoi(num);
    }
    return to_string(result);
  } else if (op == '*') {
    result = 1;
    for (string num : data) {
      result *= stoi(num);
    }
    return to_string(result);
  } else {
    return "KESALAHAN";
  }
}

int main() {
  long long panjang = 2002419288;
  long long tinggi = 1040323716;

  long long luas = panjang * tinggi;
  // jika panjang dan tinggi tipenya int maka akan tetap salah jika perkalian
  // keduanya dimasukkan kedalam variabel luas yang bertipe data long long

  // konversi tipe data panjang menjadi long long (type casting maybe?) dari
  // int, karena salah satu tipenya long long maka hasilnya akan bertipe long
  // long

  // long long luas = (long long) panjang * tinggi;
  cout << luas << endl;

  // Luas segitiga
  double alas = 1233;
  double tinggiSegi = 1619;

  double luasSegi = alas * tinggiSegi / 2;

  // Membuat cout melakukan output dengan satu angka dibelakang koma
  cout << fixed << setprecision(1) << luasSegi << endl;

  string mine = "punyaku punyaku";
  char myyyy[] = "sdfsdf";
  char fk = 'u';

  // for each char c in string s
  // for (char c : s) {
  //   ...
  // }
  string s = "thequickbrownfoxjumpsoverthelazydog";

  for (char c : s) {
    if (c == 'z') {
      c = 'a' - 32;
    } else {
      c += 1 - 32;
    }

    cout << c;
  }
  cout << endl;

  // vector (array dinamis)
  cetak_vector(jumlah_bersebelahan({1, 2, 3, 4, 5}));
  cetak_vector(jumlah_bersebelahan({17, 8, 1945}));

  cout << kalkulator('+', {"1234567890", "0", "987654321", "314159265"})
       << endl;
  cout << kalkulator('+', {"123", "456", "789", "111"}) << endl;
  cout << kalkulator('*', {"123", "456", "789", "111"}) << endl;
  cout << kalkulator('*', {"17", "8", "1945"}) << endl;
  cout << kalkulator('?', {"3", "2", "1"}) << endl;
}