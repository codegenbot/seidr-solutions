#include <iostream>

double snowDay(int hours, float initialSnow, float snowFallRate, float meltingRate) {
    double totalSnow = initialSnow;
    
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        if (totalSnow > 0.0)
            totalSnow -= totalSnow * meltingRate;
    }
    
    return totalSnow;
}

int main() {
    int hours;
    std::cin >> hours;
    float initialSnow, snowFallRate, meltingRate;
    std::cin >> initialSnow >> snowFallRate >> meltingRate;

    double result = snowDay(hours, initialSnow, snowFallRate, meltingRate);

    std::cout << std::fixed << std::setprecision(10) << result << std::endl;

    return 0;
}