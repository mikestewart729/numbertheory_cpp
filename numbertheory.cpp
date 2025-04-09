// Source file for number theory functions
# include "numbertheory.h"

namespace NumTh
{
    int euclidGcd(int a, int b)
    {
        // Quickly ensure that a is larger than b.
        if (b > a)
        {
            int temp {b};
            b = a;
            a = temp;
        }

        // Recursively compute the GCD of two integers a and b using Euclid's
        // algorithm. This is an O(log n) operation.
        if (a % b == 0)
        {
            return b;
        }
        return euclidGcd(b, a % b);
    }

    int eulerPhi(int n)
    {
        // Compute Phi(n) which counts the number of integers <= n which are
        // relatively prime to n.
        int totient {0};

        // Use the naive Euclidean algorithm to compute gcd(n, i) for i <= n. 
        // This is O(n log n) in total.
        for (int i {1}; i <= n; ++i)
        {
            int gcd{euclidGcd(n, i)};
            // Is i relatively prime to n?
            if (gcd == 1)
            {
                // Increase the running value of totient.
                ++totient;
            }
        }

        return totient;
    }

    bool isPrime(int n)
    {
        // Use the naive O(n log n) algorithm to compute Euler's totient. An integer n
        // is prime if and only if Phi(n) = n - 1
        return (eulerPhi(n) == (n-1));
    }
}