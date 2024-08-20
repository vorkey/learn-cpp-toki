#include <iostream>

using namespace std;

void cetak_menurun(int n) {
  if (n == 0) {
    return;
  }
  cout << n << endl;
  cetak_menurun(n - 1);
}

int faktorial(int n) {
  if (n == 1) {
    return 1;
  } else {
    return faktorial(n - 1) * n;
  }
}

// atau dari belakang menggunakan s.back() dan s.substr(0, s.size() - 1)
int hitung_vokal(string s) {
  if (!s[0]) {
    return 0;
  }

  char c = s[0];
  if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
    return 1 + hitung_vokal(s.substr(1));
  } else {
    return hitung_vokal(s.substr(1));
  }
}

int jumlah_digit(int n) {
  if (n / 10 == 0) {
    return n;
  } else {
    return n % 10 + jumlah_digit(n / 10);
  }
}

bool palindrom(string s) {
  if (s.size() <= 1) {
    return true;
  }

  if (s[0] != s.back()) {
    return false;
  } else {
    return palindrom(s.substr(1, s.size() - 2));
  }
}

string biner(int n) {
  if (n == 0) {
    return "0";
  }
  if (n == 1) {
    return "1";
  }

  if (n % 2 == 1) {
    return biner(n / 2) + "1";
  } else {
    return biner(n / 2) + "0";
  }
}

int main() {
  cout << faktorial(12) << endl;

  cout << jumlah_digit(1982304556) << endl;
  cetak_menurun(10);

  cout << palindrom("") << endl;
  cout << palindrom("x") << endl;
  cout << palindrom("aa") << endl;
  cout << palindrom("ab") << endl;
  cout << palindrom("ini") << endl;
  cout << palindrom("itu") << endl;
  cout << palindrom("anna") << endl;
  cout << palindrom("ibu ratna antar ubi") << endl;
  cout << palindrom("rumah murah") << endl;
  cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
}