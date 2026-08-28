#include <iostream>
#include "recursion.hpp"

using namespace std;

int sum_first_numbers(int n) {
    if (n == 1) return 1;

    return n + sum_first_numbers(n-1);
}