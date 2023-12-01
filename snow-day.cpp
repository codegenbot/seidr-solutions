#include <iostream>

double calculateSnowAmount(int hours, double initialSnow, double snowFallRate, double meltingRate) {
    double totalSnow = initialSnow;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= meltingRate * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    double initialSnow, snowFallRate, meltingRate;

    std::cin >> hours >> initialSnow >> snowFallRate >> meltingRate;
    double finalSnow = calculateSnowAmount(hours, initialSnow, snowFallRate, meltingRate);
    std::cout << finalSnow << std::endl;
    
    return 0;
}