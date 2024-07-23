```cpp
#include <iostream>
#include <string>
#include <iomanip>

std::string snowDay(int hours, float onGround, float rate, float melt) {
    std::string s = "";
    for (int i = 0; i < hours; i++) {
        onGround += (rate / 60);
        if (onGround > 1024) {
            float excess = onGround - 1024;
            onGround = 1024;
            onGround -= excess;
        } else {
            onGround -= melt * onGround;
        }
    }
    s = std::to_string(onGround);
    return s;
}

int main() {
    int hours;
    std::cin >> hours;
    float onGround, rate, melt;
    std::cin >> onGround >> rate >> melt;
    std::cout << std::fixed << std::setprecision(0) << snowDay(hours, onGround, rate, melt) << std::endl;
    return 0;
}