#include <iostream>

float calculateSnow(int hours, float initialSnow, float rateOfSnow, float meltingRate) {
    float snow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        snow += rateOfSnow;
        snow -= snow * meltingRate;
    }
    
    return snow;
}

int main() {
    int hours;
    float initialSnow, rateOfSnow, meltingRate;
    
    std::cin >> hours;
    std::cin >> initialSnow;
    std::cin >> rateOfSnow;
    std::cin >> meltingRate;
    
    float finalSnow = calculateSnow(hours, initialSnow, rateOfSnow, meltingRate);
    
    std::cout << finalSnow << std::endl;
    
    return 0;
}