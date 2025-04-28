#include <iostream>
#include "ModulesNovak.h"

void run_test(double x, double y, double z, double expected) {
    double result = s_calculation(x, y, z);
    std::cout << "Input: x=" << x << ", y=" << y << ", z=" << z << "\n";
    std::cout << "Expected: " << expected << ", Got: " << result << "\n";
    if (fabs(result - expected) < 1e-6)
        std::cout << "Test passed\n\n";
    else
        std::cout << "Test FAILED\n\n";
}

int main() {
    run_test(1.0, 0.0, 2.0, sqrt(1 + fabs(cos(1.0))) + 2 * 3.14 + pow(fabs(2 - 1.0) / sin(1.0), 2));
    return 0;
}
