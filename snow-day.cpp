#include <iostream>
#include <iomanip>

float calculateSnow(float hours, float snow, float rate, float melt) {
    for (int i = 0; i < hours; i++) {
        float newSnow = snow + rate - melt * snow;
        snow = newSnow;
    }
    return snow;
}

int main() {
    float hours, snow, rate, melt;
    std::cin >> hours >> snow >> rate >> melt;
    std::cout.precision(16);
    std::cout << calculateSnow(hours, snow, rate, melt) << std::endl;
    return 0;
}