#include <iostream>

double snowDay(int hours, float onGround, float rate, float melt) {
    double total = onGround;
    for (int i = 0; i < hours; i++) {
        total += rate;
        if (total > 0) {
            total -= total * melt;
        }
    }
    return total;
}

int main() {
    int hours;
    std::cin >> hours;
    float onGround, rate, melt;
    std::cin >> onGround >> rate >> melt;
    double result = snowDay(hours, onGround, rate, melt);
    std::cout << fixed << setprecision(10) << result << endl;
    return 0;