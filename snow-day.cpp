#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;

    std::cin >> hours >> snow >> rate >> melt;

    while (hours--) {
        snow += rate - (snow * melt);
    }

    std::cout << snow;

    return 0;
}