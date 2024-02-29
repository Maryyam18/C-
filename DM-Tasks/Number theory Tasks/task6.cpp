#include <cmath>
#include <iostream>
#include <sstream>


using namespace std;

long long mod_pow(long long x, long long y, long long n) {
  long long result = 1;
  x = x % n;

  while (y > 0) {
    if (y % 2 == 1)
      result = (result * x) % n;

    y = y / 2;
    x = (x * x) % n;
  }

  return result;
}

long long rsa_encrypt(long long block, long long e, long long n) 
{
  return mod_pow(block, e, n);
}

int main() {
  long long n = 2537;
  long long e = 13;
  string plaintext;

  cout << "Enter the plaintext message: ";
  getline(cin, plaintext);

  string stringToInt;
  for (char ch : plaintext) {
    int numeric_value = ch - 'A';

    // Add leading zero if necessary
    if (numeric_value < 10) {
      stringToInt += "0";
    }

    stringToInt += to_string(numeric_value);
  }

  int block_size = log10(n) + 1;
  for (size_t i = 0; i < stringToInt.length(); i += block_size) {
    string block_str = stringToInt.substr(i, block_size);
    long long block = stoll(block_str);

    long long encrypted_block = rsa_encrypt(block, e, n);

    cout << encrypted_block << " ";
  }

  cout << endl;

  return 0;
}
