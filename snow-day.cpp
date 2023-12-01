#include <iostream>

double calculateSnowAmount(int hours, double currentSnow, double snowFallRate, double meltingRate) {
    for(int i = 0; i < hours; i++) {
        currentSnow += snowFallRate - (meltingRate * currentSnow);
    }
    return currentSnow;
}

int main() {
    int hours;
    double currentSnow, snowFallRate, meltingRate;
    std::cin >> hours >> currentSnow >> snowFallRate >> meltingRate;
    std::cout << calculateSnowAmount(hours, currentSnow, snowFallRate, meltingRate) << std::endl;
    
    return 0;
}