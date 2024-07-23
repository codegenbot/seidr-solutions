#include <iostream>

double snowDay(int hours, double onGround, double rate, double melt) {
    for (int i = 0; i < hours; ++i) {
        onGround += rate;
        onGround -= melt;
    }
    return onGround;
}

int main() {
    int hours;
    std::cin >> hours;
    double onGround, rate, melt;
    std::cin >> onGround >> rate >> melt;
    std::cout << snowDay(hours, onGround, rate, melt) << std::endl;
    return 0;
}