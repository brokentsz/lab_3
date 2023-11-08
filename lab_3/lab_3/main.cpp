#include <iostream>
#include "Comb.h"

int main() {
    int n, k;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    std::cout << "Enter the value of k: ";
    std::cin >> k;

    std::cout << "Factorial(" << n << ") = " << factorial(n) << std::endl;
    std::cout << "Permutations(" << n << ", " << k << ") = " << permutations(n, k) << std::endl;
    std::cout << "Permutations with Replacement(" << n << ", " << k << ") = " << permutations_with_replacement(n, k) << std::endl;
    std::cout << "Combinations(" << n << ", " << k << ") = " << combinations(n, k) << std::endl;
    std::cout << "Combinations with Replacement(" << n << ", " << k << ") = " << combinations_with_replacement(n, k) << std::endl;

    return 0;
}
