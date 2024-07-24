#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;

    std::cin >> hours >> snow >> rate >> melt;

    float snowfall = rate - (rate * melt / 100.0);

    for (int i = 0; i < hours; ++i) {
        snow += snowfall;
        snow -= snow * melt / 100.0;
    }

    std::cout << snow << std::endl;

    return 0;
}