#include <iostream>

double calculateSnowOnGround(int hours, double snowOnGround, double snowFallRate, double meltingRate) {
    for (int i = 0; i < hours; i++) {
        snowOnGround += snowFallRate;
        snowOnGround -= snowOnGround * meltingRate / 100.0;
    }
    return snowOnGround;
}

int main() {
    int hours;
    double snowOnGround, snowFallRate, meltingRate;
    std::cin >> hours >> snowOnGround >> snowFallRate >> meltingRate;
    double result = calculateSnowOnGround(hours, snowOnGround, snowFallRate, meltingRate);
    std::cout << result << std::endl;
    return 0;
}