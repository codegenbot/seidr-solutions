#include <iostream>
#include <iomanip>

int main() {
    int hours;
    float groundSnow, rateOfSnowFall, proportionMelting;

    std::cin >> hours >> groundSnow >> rateOfSnowFall >> proportionMelting;

    float initialGroundSnow = groundSnow;
    for(int i=0; i < hours; i++) {
        groundSnow += rateOfSnowFall;
        groundSnow *= (1 - proportionMelting/100.0f);
    }
    std::cout << std::fixed << std::setprecision(2) << initialGroundSnow + groundSnow << std::endl;

    return 0;
}