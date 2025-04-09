// Use some of the number theory functions to test how much C++ we have learned
#include "numbertheory.h" // For the NumTh (number theory) namespace
#include <iostream>
#include <string>

int main()
{
    // Namespace alias. Use this as a toy-example for how namespaces work
    namespace NT = NumTh;

    // Get the integer from the user
    std::cout << "Calculate Euler's totient for a chosen integer!\n";
    std::cout << "Enter an integer: ";
    int n {};
    std:: cin >> n;

    // Calculate the totient using the naive algorithm
    int totient {NT::eulerPhi(n)};

    // Display the result to the user
    std::cout << "Phi(" << n << ") = " << totient << '\n';

    /*
     * Check if n is prime. Note: We are implicitly calling eulerPhi twice in this
     * program, so in an efficiency critical operation, we could/would refactor the 
     * code to avoid this second function call.
     */
    std::string is_prime {NT::isPrime(n) ? " is prime.\n": " is not prime.\n"};

    // Display primality result to the user
    std::cout << "The integer " << n << is_prime;

    // Test using a constexpr global variable within this namespace
    std::cout << "A common constant in number theory is Euler's constant, ";
    std::cout << "~ " << NT::Constants::g_euler_const << '\n';

    return 0;
}
