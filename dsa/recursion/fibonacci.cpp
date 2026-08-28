#include <iostream>
#include <vector>
#include "recursion.hpp"

using namespace std;

// Print the Fibonacci series up to the Nth term
// Fibonacci series: 0, 1, 1, 2, 3, 5, ...
vector<int> fibonacci(int n) {
    // Base case: If n is 0 or negative, return an empty vector.
    if (n <= 0) return {};

    // Base case: The first Fibonacci term is 0.
    if (n == 1) return {0};

    // Recursively generate the first (n - 1) Fibonacci terms.
    vector<int> fib = fibonacci(n - 1);

    // For the second term, add 1 to the series.
    if (n == 2) {
        fib.push_back(1);
    }
    else {
        // Add the next Fibonacci number by summing the
        // previous two numbers in the vector.
        fib.push_back(fib[n - 2] + fib[n - 3]);
    }

    return fib;
}