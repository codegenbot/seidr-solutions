#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        snow += rate; // Add new snow
        snow -= snow * melt; // Melt snow proportionally
    }

    std::cout << snow << std::endl;

    return 0;
}