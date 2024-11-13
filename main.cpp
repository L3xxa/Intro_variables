#include <iostream>

int main() {
    double R1, R2, R3;

    std::cout << "Enter the value of R1: ";
    std::cin >> R1;
    std::cout << "Enter the value of R2: ";
    std::cin >> R2;
    std::cout << "Enter the value of R3: ";
    std::cin >> R3;

    double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    std::cout << "R0 = " << R0 << std::endl;

    return 0;
}
