#include <iostream>

double calculateSnowOnGround(int hours, double snowOnGround, double snowFallRate, double meltingProportion) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * meltingProportion;
    }
    return snowOnGround;
}

int main() {
    int hours;
    double snowOnGround, snowFallRate, meltingProportion;
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltingProportion;
    double result = calculateSnowOnGround(hours, snowOnGround, snowFallRate, meltingProportion);
    std::cout << result << std::endl;
    return 0;
}