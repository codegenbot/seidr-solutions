```cpp
#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionMelting;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionMelting;

    float calculatedSnow = groundSnow;

    for(int i = 1; i <= hours; i++) {
        calculatedSnow += std::round((rateOfSnowFall - calculatedSnow * proportionMelting / 100.0f) * 100) / 100;
    }

    std::cout << std::fixed << std::setprecision(2) << calculatedSnow << std::endl;

    return 0;
}