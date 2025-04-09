// Header file for useful number theory functions and constants
#ifndef NUMBERTHEORY_H
#define NUMBERTHEORY_H

namespace NumTh
{
    namespace Constants
    {
        inline constexpr double g_euler_const {0.577};
    }

    int euclidGcd(int a, int b);

    int eulerPhi(int n);

    bool isPrime(int n);
}

#endif
