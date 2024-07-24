#include <iostream>

int main() {
    int hours;
    float snow, rate, melt;

    std::cin >> hours >> snow >> rate >> melt;

    for (int i = 0; i < hours; ++i) {
        float snowfall = rate - (snow * melt);
        snow += snowfall;
    }

    std::cout << snow;

    return 0;
}