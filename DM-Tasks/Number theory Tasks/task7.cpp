#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate modular exponentiation (num^exponent mod modulus)
long long mod_pow(long long num, long long exponent, long long modulus)
{
    long long result = 1;
    num = num % modulus;

    while (exponent > 0)
    {
        if (exponent % 2 == 1)
            result = (result * num) % modulus;

        exponent = exponent / 2;
        num = (num * num) % modulus;
    }

    return result;
}

// Function to calculate modular inverse using extended Euclidean algorithm
long long mod_inverse(long long a, long long m)
{
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {
        q = a / m;
        t = m;

        m = a % m, a = t;
        t = x0;

        x0 = x1 - q * x0;
        x1 = t;
    }

    if (x1 < 0)
        x1 += m0;

    return x1;
}

// Function to calculate RSA private key (d) given public key (e) and totient (phi_n)
long long calculate_private_key(long long encryptionKey, long long totientN)
{
    return mod_inverse(encryptionKey, totientN);
}

int main()
{
    // RSA public key parameters
    long long modulusN = 2537;
    long long encryptionKeyE = 13;

    // Placeholder values for prime factors (replace these with actual prime numbers)
    long long pValue = 43;
    long long qValue = 59;

    // Calculate totient_n (phi(n))
    long long Phin = (pValue - 1) * (qValue - 1);

    // Calculate private key (d)
    long long decryptionKeyD = calculate_private_key(encryptionKeyE, Phin);

    cout << "Decryption Key (d) is: " << decryptionKeyD << endl;

    return 0;
}
