#include <iostream>
#include <vector>

using namespace std;

//  This is the sample input
// 8
// 100
// 281923
// 7
// 1000000
// 777777
// 123456
// 9999999
// 7239

void print_vector(vector<long long> v) {
  for (long long num : v) {
    cout << num << endl;
  }
}

vector<long long> sum_of_all_without_this_number(vector<long long> v) {
  vector<long long> result;
  long long current_sum;

  for (long long num : v) {
    current_sum = 0;
    for (long long j : v) {
      current_sum += j;
      cout << current_sum << " + " << j << " ";
    }
    cout << '-' << num << endl;
    current_sum -= num;
    result.push_back(current_sum);
  }

  return result;
}

int main() {
  vector<long long> input;
  vector<long long> result_vector;

  int size;
  cin >> size;

  for (int i = 0; i < size; i++) {
    long long wa;
    cin >> wa;
    input.push_back(wa);
  }

  result_vector = sum_of_all_without_this_number(input);
  print_vector(result_vector);
}