```c++
#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionMelting;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionMelting;

    for(int i = 0; i < hours; i++) {
        groundSnow += rateOfSnowFall;
        groundSnow -= groundSnow * proportionMelting / 100.0f;
    }

    std::cout << std::fixed << std::setprecision(2) << groundSnow << std::endl;

    return 0;
}