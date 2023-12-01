#include <iostream>

double calculateSnowOnGround(int hours, double snowOnGround, double snowFallRate, double snowMeltProportion) {
    double totalSnow = snowOnGround;
    for (int i = 0; i < hours; i++) {
        totalSnow += snowFallRate;
        totalSnow -= snowMeltProportion * totalSnow;
    }
    return totalSnow;
}

int main() {
    int hours;
    double snowOnGround, snowFallRate, snowMeltProportion;
    
    std::cin >> hours;
    std::cin >> snowOnGround;
    std::cin >> snowFallRate;
    std::cin >> snowMeltProportion;
    
    double result = calculateSnowOnGround(hours, snowOnGround, snowFallRate, snowMeltProportion);
    
    std::cout << result << std::endl;
    
    return 0;
}