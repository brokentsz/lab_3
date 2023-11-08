#include "Comb.h"
#include <cmath>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int permutations(int n, int k) {
    if (n < k) {
        return 0;
    }
    return factorial(n) / factorial(n - k);
}

int permutations_with_replacement(int n, int k) {
    return static_cast<int>(std::pow(n, k));
}

int combinations(int n, int k) {
    if (n < k) {
        return 0;
    }
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int combinations_with_replacement(int n, int k) {
    return combinations(n + k - 1, k);
}
