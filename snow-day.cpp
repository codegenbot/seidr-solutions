#include <iostream>

double calculateSnowAfterHours(int hours, double currentSnow, double snowFallRate, double snowMeltingRate) {
    for (int i = 0; i < hours; i++) {
        currentSnow += snowFallRate;
        currentSnow *= (1 - snowMeltingRate);
    }
    return currentSnow;
}

int main() {
    int hours;
    double currentSnow, snowFallRate, snowMeltingRate;
    std::cin >> hours >> currentSnow >> snowFallRate >> snowMeltingRate;
    double finalSnow = calculateSnowAfterHours(hours, currentSnow, snowFallRate, snowMeltingRate);
    std::cout << finalSnow << std::endl;
    return 0;
}