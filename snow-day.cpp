#include <iostream>

float calculateSnow(float hours, float snow, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        snow += rate - melt * snow;
    }
    return snow;
}

int main() {
    float hours, snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;
    std::cout << calculateSnow(hours, snow, rate, melt) << std::endl;
    return 0;
}