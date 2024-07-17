#include <iostream>

double snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    double totalSnow = 0;
    
    for (int i = 0; i < hours; i++) {
        if (i == 0) {
            totalSnow += initialSnow;
        } else {
            totalSnow += snowFallRate - meltingRate;
        }
    }
    
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    std::cin >> initialSnow >> snowFallRate >> meltingRate;
    
    double result = snowDay(hours, initialSnow, snowFallRate, meltingRate);
    
    std::cout << result << std::endl;
    
    return 0;
}