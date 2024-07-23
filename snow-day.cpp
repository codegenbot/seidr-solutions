```
#include <iostream>

float snowDay(int hours, float onGround, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        onGround += rate;
        if (onGround > 1024) {
            float excess = onGround - 1024;
            onGround = 1024;
            onGround -= excess;
        } else {
            onGround *= (1 - melt);
        }
    }
    return onGround;
}

int main() {
    int hours;
    std::cin >> hours;
    float onGround, rate, melt;
    std::cin >> onGround >> rate >> melt;
    std::cout << snowDay(hours, onGround, rate, melt) << std::endl;
    return 0;
}