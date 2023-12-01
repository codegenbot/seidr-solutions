#include <iostream>
#include <iomanip>

double calculateSnowOnGround(int hours, double snowOnGround, double snowFallRate, double snowMeltRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround *= (1 - snowMeltRate);
    }
    return snowOnGround;
}

int main() {
    int hours;
    double snowOnGround, snowFallRate, snowMeltRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> snowMeltRate;
    
    double result = calculateSnowOnGround(hours, snowOnGround, snowFallRate, snowMeltRate);
    
    std::cout << std::fixed << std::setprecision(15) << result << std::endl;
    
    return 0;
}